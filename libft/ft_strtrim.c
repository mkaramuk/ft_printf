/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:54:59 by devman            #+#    #+#             */
/*   Updated: 2022/01/13 13:16:31 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ltrim(char *str, char *set)
{
	size_t	ret;

	ret = 0;
	while (ft_strchr(set, str[ret]) && str[ret])
		ret++;
	return (ret);
}

static size_t	rtrim(char *str, char *set)
{
	size_t	ret;

	ret = ft_strlen(str) - 1;
	while (ft_strchr(set, str[ret]) && &str[ret] != str)
		ret--;
	return (ret);
}

char	*ft_strtrim(char *str, char *set)
{
	size_t	start;
	size_t	finish;

	if (!str || !set)
		return (NULL);
	start = ltrim(str, set);
	finish = rtrim(str, set);
	if (finish == 0)
		return (ft_strdup(""));
	return (ft_substr(str, start, finish - start + 1));
}
