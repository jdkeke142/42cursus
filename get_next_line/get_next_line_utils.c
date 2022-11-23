/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 22:22:55 by kjimenez          #+#    #+#             */
/*   Updated: 2022/11/22 22:22:59 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	str_len;
	char	*duplicated_str;

	str_len = ft_strlen(s);
	duplicated_str = malloc((str_len + 1) * sizeof(char));
	if (!duplicated_str)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		duplicated_str[i] = s[i];
		i++;
	}
	duplicated_str[i] = '\0';
	return (duplicated_str);
}

static int	ft_substr_len(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s[start + i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	malloc_len;
	char	*sub_str;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	malloc_len = ft_substr_len(s, start, len);
	sub_str = (char *) malloc((malloc_len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	char		*joined_str;

	if (!s1 || !s2)
		return (NULL);
	joined_str = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
			* sizeof(char));
	if (!joined_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		joined_str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		joined_str[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	joined_str[ft_strlen(s1) + i] = '\0';
	return (joined_str);
}
