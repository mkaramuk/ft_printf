/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:57:07 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/01/13 13:18:19 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*fonk)(unsigned int, char*))
{
	unsigned int	index;

	if (!str)
		return ;
	index = 0;
	while (str[index])
	{
		fonk(index, str + (index));
		index++;
	}
}
