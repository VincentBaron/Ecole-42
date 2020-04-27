/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:13:51 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 20:46:27 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *x1;
    const char *x2;
    unsigned int i;
    
    x1 = (const char *)s1;
    x2 = (const char *)s2;
    if (n == 0)
        return (0);
    i = 0;
    while (i < n)
    {
        if (*x1 != *x2)
            return (*x1 - *x2);
        i++;
    }
    return (*x1 - *x2);
}