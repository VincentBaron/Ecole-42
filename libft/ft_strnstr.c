/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:16:03 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 13:16:04 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char	*big, const char *little, size_t len)
{
    int i;
    int f;
     unsigned int k;
    
    i = 0;
    if (little[0] == '\0')
        return ((char *)big);
    while (big[i] && len > 0)
    {
        k = 0;
        if (big[i] == little[k] && big[i])
        {
            f = i;
            while (big[f] == little[k] && big[f])
            {
                k++;
                f++;
            }
        }
        if(k == ft_strlen(little))
            return ((char *)&big[i]);
        i++;
        len--;
    }
    return (0);
}