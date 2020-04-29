/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:15:24 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/29 13:50:12 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t f;
    size_t length;

    if (size == 0)
        return (ft_strlen(src));
    length = ft_strlen(dst);
    i = 0;
    f = ft_strlen(dst);
    if (size > ft_strlen(dst))
    {
        while (src[i] && i + 1 < size - length)
        {
            dst[f] = src[i];
            i++;
            f++;
        }
        if (ft_strlen(src) > i)
            dst[f] = '\0';
    }
    if (size < length)
        return (ft_strlen(src) + size);
    return(ft_strlen(src) + length);
}*/

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	len_src;

	len = 0;
	len_src = ft_strlen((char *)src);
	while (dest[len] && len < size)
		len = len + 1;
	i = len;
	while (src[len - i] && len + 1 < size)
	{
		dest[len] = src[len - i];
		len = len + 1;
	}
	if (i < size)
		dest[len] = '\0';
	return (len_src + i);
}



