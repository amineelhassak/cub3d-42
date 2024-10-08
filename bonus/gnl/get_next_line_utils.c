/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 04:54:58 by alaassir          #+#    #+#             */
/*   Updated: 2024/08/15 02:26:06 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*fill(char *buff)
{
	char	*dst;
	ssize_t	i;

	i = 0;
	if (!buff)
		return (NULL);
	while (buff[i] && buff[i] != '\n')
		i++;
	if (buff[i] == '\n')
		i++;
	dst = (char *)g_malloc(i + 1, MALLOC_S);
	if (!dst)
		return (NULL);
	i = -1;
	while (buff[++i] && buff[i] != '\n')
		dst[i] = buff[i];
	if (buff[i] == '\n')
	{
		dst[i] = buff[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void	get_rmn(char *dst, char *src, int check)
{
	ssize_t	i;
	ssize_t	j;

	i = 0;
	j = 0;
	if (*src && dst)
	{
		while (src[i] && src[i] != '\n')
			i++;
		if (src[i] == '\n')
			i++;
		while (src[i] && j < BUFFER_SIZE)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		if (j < BUFFER_SIZE)
			dst[j] = '\0';
		else
			dst[BUFFER_SIZE - 1] = '\0';
		if (check == 1)
			ft_free(NULL, NULL, &src, 2);
	}
}

char	*ft_free(char **line, char **next, char **buff, int check)
{
	(void)line;
	(void)next;
	(void)buff;
	(void)check;
	return (NULL);
}

char	*ft_last(int fd, char *next, char *line)
{
	line = ft_strjoin_gnl(line, next, 0);
	if (!line)
		return (NULL);
	line = get_the_line(fd, next, line);
	if (!line)
		return (NULL);
	return (line);
}
