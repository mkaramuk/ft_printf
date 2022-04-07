/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:04:04 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/01/13 09:01:17 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * ft_memcpy ile aynı çalışır. Tek farkı eğer
 * dst ve src aynı değişken içerisinden geliyor ise
 * (char * veya bir array) kopyalama sırasında veriler
 * çakışacağı için duruma göre işlemi tersten gerçekleştirir.
 * Örneğin:
 * h	e	l	l	o	w	o	r	l	d	w	o	r	l	d
 * |				|
 * src				dst
 * 
 * Bu senaryoda src dst'den daha geride olduğu için kopyalama
 * işlemi tersten yapılır. Eğer burada ft_memcpy kullanılırsa:
 * 
 * len = 10
 * h	e	l	l	o	h	e	l	l	o	h	e	l	l	o
 * |				|
 * src				dst
 * 
 * Fakat bu fonksyion tersten yazmaya başladığı için istenen sonuç:
 * 
 * h	e	l	l	o	h	e	l	l	o	w	o	r	l	d
 * |				|
 * src				dst
 * @param dst
 * 	Verinin yazılacağı hedef adres
 * @param src 
 * 	Verinin alınacağı kaynak adres.
 * @param len 
 * 	Kaç byte kopyalanacağı
 * @return void* 
 * 	dst dönderilir.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*_dst;
	unsigned char	*_src;

	if (dst == NULL && src == NULL)
		return (dst);
	if (src < dst)
	{
		_dst = ((unsigned char *)dst) + len - 1;
		_src = ((unsigned char *)src) + len - 1;
		while (len-- > 0)
			*_dst-- = *_src--;
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
