/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:16:04 by devman            #+#    #+#             */
/*   Updated: 2022/01/24 15:33:41 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int	ft_puts(const char *str);
int	ft_putchar(char c);
int	ft_putnbr(int nbr);
int	ft_putnbr_u(unsigned int nbr, char *base);
int	ft_putptr(void *ptr);
int	ft_printf(const char *s, ...);
int	ft_printf_controller(char c, va_list args);

#endif