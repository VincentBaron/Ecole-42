/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:15:48 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 13:15:49 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int i;
    
    i = 0;
    while (s1[i] && s2[i] && i <= n)
    {
        if (s1[i] != s2[i])
            break;
        i++;
    }
    return ((unsigned int)s1[i] - s2[i]);
}