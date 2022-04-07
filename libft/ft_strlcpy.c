/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:55:19 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/01/13 08:48:04 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 *	dst'e src'den size kadar karakteri kopyalar
 * 	size'ın 0'dan büyük olması gerekir.
 * @param dst 
 * 	Kopyalama yapılacak hedef string.
 * @param src 
 * 	Verinin alınacağı kaynak string.
 * @param size 
 * 	Kopyalanacak karakter sayısı.
 * @return size_t 
 * 	src'nin uzunluğunu dönderir.
 */
size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;

	if (size > 0)
	{
		i = 0;
		while (size - 1 > 0 && src[i])
		{
			dst[i] = src[i];
			i++;
			size--;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
