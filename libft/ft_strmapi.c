/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:15:43 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 13:15:44 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *snew;
    unsigned int size;
    
    size = 0;
    while(s[size])
        size++;
    if (!(snew = (char *)malloc(sizeof(char) * (size + 1))))
        return (0);
    size = 0;
    while (s[size])
    {
        snew[size] = (*f)(size, s[size]);
        size++;
    }
    snew[size] = '\0';
    return (snew);
}