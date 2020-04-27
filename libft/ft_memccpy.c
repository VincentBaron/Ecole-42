/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:13:35 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 20:15:43 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
     const char *x;
     char *y;
     unsigned int i;
     
     x = (const char *)src;
     y = dest;
     i = 0;
     
     while (i < n)
     {
         *y = *x;
         if (*x == c)
            return (y + 1);
         y++;
         x++;
         i++;
     }
     return (NULL);
}