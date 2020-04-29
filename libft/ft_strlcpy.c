/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:15:30 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/29 13:49:10 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    while (src[i])
        i++;
    if (size == 0)
        return (i);
    j = 0;
    while (j + 1 < size && src[j])
    {
        dst[j] = src[j];
        j++;
    }
    dst[j] = '\0';
    return (i);
}
