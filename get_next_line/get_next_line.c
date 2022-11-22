/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 22:22:38 by kjimenez          #+#    #+#             */
/*   Updated: 2022/11/22 22:22:43 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "get_next_line.h"

int	get_next_line_read(int fd, char **str)
{
	char			*last_str;
	char			*buf;
	int				chars_read;

	buf = NULL;
	while (!buf || buf[ft_strlen(buf) - 1] != '\n')
	{
		if (buf)
			free(buf);
		buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
		chars_read = read(fd, buf, BUFFER_SIZE);
		if (chars_read == -1)
		{
			free(buf);
			return (0);
		}
		if (chars_read == 0)
			break ;
		buf[chars_read] = '\0';
		last_str = *str;
		*str = ft_strjoin(*str, buf);
		free(last_str);
	}
	free(buf);
	return (1);
}

char	*get_next_line(int fd)
{
	static char		*str;
	size_t			i;
	char			*line;
	char			*last_str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!str)
		str = ft_strdup("");
	if (get_next_line_read(fd, &str) == 0)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n' || i == ft_strlen(str) - 1)
		{
			line = ft_substr(str, 0, i + 1);
			last_str = str;
			str = ft_substr(str, i + 1, ft_strlen(str) - 1);
			free(last_str);
			return (line);
		}
		i++;
	}
	return (NULL);
}
