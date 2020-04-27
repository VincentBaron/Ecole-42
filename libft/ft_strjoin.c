/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:15:18 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 13:15:19 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strjoin(char const *s1, char const *s2)
{
    char *join;
    int size;
    int i;
    
    size = ft_strlen(s1) + ft_strlen(s2) + 1;
    if(!(join = malloc(sizeof(char) * size)))
        return (0);
    i = 0;
    while (*s1 && i < size)
    {
        join[i] = *s1;
        s1++;
        i++;
    }
    while (*s2 && i < size)
    {
        join[i] = *s2;
        s2++;
        i++;
    }
    join[i] = '\0';
    return (join);
}