/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:17:15 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/01/03 13:07:22 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*_dst;
	char	*_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	_dst = (char *)dst;
	_src = (char *)src;
	i = 0;
	while (i < n)
	{
		_dst[i] = _src[i];
		i++;
	}
	return (dst);
}
