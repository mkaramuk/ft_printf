/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:02:52 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/01/13 12:03:39 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * 	Kendisine verilen string değeri
 *  hafızada yeni bir alan oluşturup
 * 	oraya kopyalar ve kopyaladığı
 * 	alanın adresini döndürür. 
 * @param s1 
 * 	Kopyalanack kaynak string.
 * @return char* 
 * 	Yeni string'in adresini döndürür.
 */
char	*ft_strdup(const char *s1)
{
	char	*new_str;
	size_t	size;
	size_t	i;

	size = ft_strlen(s1) + 1;
	new_str = (char *)malloc(sizeof(char) * size);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i++ < size)
		new_str[i - 1] = s1[i - 1];
	return (new_str);
}
