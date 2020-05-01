/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 13:16:32 by vbaron            #+#    #+#             */
/*   Updated: 2020/04/27 13:16:37 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_charset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strndup(char *temp, int n)
{
	char	*line;
	int		i;
	if(!(line = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	i = 0;
	while (i < n)
	{
		line[i] = temp[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		x;
	char	*trim;

	i = 0;
	while (check_charset(s1[i], set) == 1)
		i++;
	trim = ft_strdup(&s1[i]);
	x = ft_strlen(trim);
	x--;
	while (check_charset(trim[x], set) == 1)
		x--;
	trim = ft_strndup(trim, x + 1);
	return (trim);
}
