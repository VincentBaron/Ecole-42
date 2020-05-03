/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:13:59 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/03 16:50:29 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!dest || !src || n == 0)
		return (NULL);
	while (n > 0)
	{
		*((char *)dest) = *((char *)src);
		dest++;
		src++;
		n--;
	}
	return (dest);
}
