/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:16:14 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 13:16:15 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (s[i])
        i++;
    i -= 1;
    while (s[i])
    {
        if (s[i] == c)
            break;
        i--;
    }
    if (s[i] != c)
        return (NULL);
    else
        return ((char *)&(s[i]));
}