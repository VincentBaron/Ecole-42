/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:12:06 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/02 12:56:46 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *alloc_itoa(unsigned int n, int size, int sign)
{
	char  *itoa;

	if (!(itoa = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	itoa[size] = '\0';
	size--;
	while (itoa > 0)
	{
		itoa[size] = n % 10 + 48;
		size--;
		n /= 10;
	}
	if (sign == 1)
		itoa[size] = '-';
	return (itoa);
}

int   get_size(int n)
{
	int   size;

	size = 0;
	if (n < 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char  *ft_itoa(int n)
{
	unsigned int   nbx;
	int            size;
	int            sign;
	char           *itoa;

	size = get_size(n);
	sign = 0;
	if (n < 0)
	{
		nbx = (unsigned int)(-1 * n);
		sign++;
	}
	else
		nbx = (unsigned int)n;
	itoa = alloc_itoa(nbx, size, sign);
	if (!n)
		*itoa = '0';
	return (itoa);
}
