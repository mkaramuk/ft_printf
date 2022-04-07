/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:55:37 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/01/04 13:59:25 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	chr;
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (n-- > 0)
	{
		if (p[i] == chr)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
