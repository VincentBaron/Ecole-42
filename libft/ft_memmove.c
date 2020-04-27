/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:14:06 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 13:14:07 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char temp[n];
    unsigned char *x;
    unsigned char *y;
    unsigned int i;
    
    if (dest == NULL || src == NULL)
        return (NULL);
    x = (unsigned char *)src;
    y = dest;
    i = 0;
    while (i < n)
    {
        temp[i] = *x;
        x++;
        i++;
    }
    i = 0;
    while (y[i])
    {
        y[i] = temp[i];
        i++;
    }
    return (dest);
}