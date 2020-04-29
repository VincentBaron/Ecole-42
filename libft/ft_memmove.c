/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:14:06 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/28 15:31:02 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char temp[n];
    unsigned char *x;
    unsigned char *y;
    unsigned int i;
    
    if (src == NULL)
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
    while (temp[i])
    {
        y[i] = temp[i];
        i++;
    }
    return (dest);
}*/

void *ft_memmove(void *dest, const void *src, size_t n)
{
    const char *x;
    char *y;
    unsigned int i;
    
    if (dest == NULL && src == NULL)
        return (NULL);
    x = src;
    y = dest;
    i = 0;
    if (x[i] == '\0')
        y[i] = '\0';
    else
    {
        while (i < n && x[i])
        {
        y[i] = x[i];
        i++;
        }
        if (ft_strlen(x) < n)
            y[i] = '\0';
    }
    return ((void *)dest);
}