/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 00:40:53 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/27 20:54:24 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_free(char *s)
{
	free(s);
	s = NULL;
}

void	ft_parse(char **leftover, char *buf, int fd, int *ret)
{
	while ((*ret = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[*ret] = '\0';
		*leftover = ft_strjoin(*leftover, buf);
	}
}

int		get_next_line(int fd, char **line)
{
	char		buf[BUFFER_SIZE + 1];
	static char	*leftover = NULL;
	int ret;
	static char **lines_list = NULL;

	if (fd < 0 || BUFFER_SIZE <= 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	if (!lines_list)
	{
		ft_parse(&leftover, buf, fd, &ret);
		lines_list = ft_split(leftover, '\n');
		ft_free(leftover);
	}
	*line = ft_substr(lines_list[0], 0, ft_strlen(lines_list[0]));
	ft_free(lines_list[0]);
	lines_list++;
	if (*lines_list == NULL)
		return 0;
	return (1);
}