/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:12:54 by devman            #+#    #+#             */
/*   Updated: 2022/01/17 15:36:33 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 	Girilen sayıyın basamak değerini bulur.
 * 	Eğer sayı negatif ise eksi karakteri için
 * 	bir fazla değer ekler.
 * @param n
 * 	Basamak sayısı bulunacak sayı.
 * @return int
 * 	n'nin basamak sayısını + varsa eksi karakteri.
 */
static int	digit_count(int n)
{
	int	ret;

	ret = 0;
	if (n < 0)
	{
		ret++;
		n = -n;
	}
	while (n > 0)
	{
		ret++;
		n /= 10;
	}
	return (ret);
}

/**
 * @brief 
 * 	str'de index'den başlayarak geriye doğru
 * 	nbr'yi yazar. Sayi negatif ise isneg 1 girilir
 *  ve '-' karakterini dahil eder.
 * @param str 
 * 	Yazılacak string.
 * @param index
 * 	str'nin uzunluğu. NULL karakter dahil. 
 * @param nbr
 * 	str'ye yazılacak integer değer.
 * @param isneg
 * 	nbr'nin negatif bir değer olup olmadığı.
 * @return char* 
 * 	str'yi dönderir.
 */
static char	*strtoint(char *str, int index, int nbr, int isneg)
{
	str[index] = '\0';
	while (--index)
	{
		str[index] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (isneg == 1)
		str[0] = '-';
	else
		str[0] = (nbr % 10) + '0';
	return (str);
}

/**
 * @brief Girilen sayıyı string'e çevirir.
 * 	nbr'yi, hafıza yeni ayırdığı bir alana
 * 	string olarak çevirir ve o alanın adresini
 * 	dönderir.
 * @param nbr
 * 	string'e dönüştürülecek sayı. 
 * @return char*
 * 	Yeni oluşturulan string'i dönderir.
 */
char	*ft_itoa(int nbr)
{
	int		len;
	char	*rtn;
	int		isneg;

	len = digit_count(nbr);
	rtn = 0;
	isneg = 0;
	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nbr == 0)
		return (ft_strdup("0"));
	else
		rtn = malloc(sizeof(char) * (len + 1));
	if (!rtn)
		return (0);
	isneg = 0;
	if (nbr < 0)
	{
		isneg++;
		nbr = -nbr;
	}
	return (strtoint(rtn, len, nbr, isneg));
}
