/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:03:02 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/01/13 15:22:30 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char *str, size_t max)
{
	size_t	i;

	i = 0;
	while (*str++ && max-- > 0)
		i++;
	return (i);
}

/**
 * @brief
 * 	dst string'inin sonuna src'yi ekler.
 *  Sonuç olarak elde edilecek string'in
 * 	uzunluğu en fazla size kadar olabilir.
 * 
 * @param dest 
 * 	src'nin ekleneceği hedef string.
 * @param src 
 * 	dst'ye eklenecek kaynak string
 * @param size 
 * 	Ekleme işlemi yapıldıktan sonra
 *  dst'nin sahip olacağı uzunluk
 * @return size_t 
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ret;
	size_t	dsize;
	size_t	srclen;

	dsize = ft_strnlen(dest, size);
	srclen = ft_strlen(src);
	ret = srclen + dsize;
	while (*src && dsize + 1 < size)
		dest[dsize++] = *src++;
	if (dsize < size)
		dest[dsize] = '\0';
	return (ret);
}
