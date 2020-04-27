/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:13:59 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 13:14:00 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *x;
    unsigned char *y;
    unsigned int i;
    
    x = (unsigned char *)src;
    y = dest;
    i = 0;
    while (i < n)
    {
        *y = *x;
        y++;
        x++;
        i++;
    }
    return (dest);
}