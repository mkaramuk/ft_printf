/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:56:54 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/01/13 11:52:19 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @brief big'in 0-n aralığında little'ı arar.
 * @param little Aranacak string.
 * @param n big'in ilk kaç karakterine bakılacağı
 * @return char* 
 * little bulunur ise bulunduğu yerin adresi,
 * little boş ise big,
 * bulunamaz ise NULL dönderir.
 */
char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] && n > ft_strlen(little) - 1)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j])
			j++;
		if (!little[j])
			return ((char *)(big + i));
		i++;
		n--;
	}
	return (NULL);
}
