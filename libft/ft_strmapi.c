/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:47:08 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/01/13 13:17:02 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char *str, char (*fonk)(unsigned int, char))
{
	char			*ret;
	unsigned int	index;

	if (!str)
		return (NULL);
	ret = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!ret)
		return (NULL);
	index = 0;
	while (*str)
	{
		ret[index] = fonk(index, *str);
		str++;
		index++;
	}
	ret[index] = '\0';
	return (ret);
}
