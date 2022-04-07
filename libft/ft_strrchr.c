/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:14:16 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/01/13 14:42:45 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * 	c karakterini s içerisinde arar sondan
 * 	başlayarak arar.
 * 
 * @param s 
 * 	Arama yapılacak string.
 * @param c 
 * 	Aranacak karakter
 * @return char* 
 * 	Bulunan karakterin adresini dönderir.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s + ft_strlen(s) + 1;
	while (str-- != s)
		if (*str == (char) c)
			return (str);
	return (NULL);
}
