/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:54:01 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/06 17:16:33 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	count_words(char const *s, char c)
{
	int	i;
	int	words_count;
	int	s_len;

	i = 0;
	s_len = ft_strlen(s);
	words_count = 0;
	while (s[i])
	{
		if ((s[i] == c && s[i+1] != c) || i == s_len - 1)
			words_count++;
		i++;
	}
	return (words_count);
}

char **ft_split(char const *untrimmed_s, char c)
{
	size_t	i;
	int		last_space;
	char	**words;
	char	*s;
	int		words_count;

	if (untrimmed_s == NULL)
		return (NULL);
	s = ft_strtrim(untrimmed_s, &c);
	i = 0;
	last_space = 0;
	words = malloc(count_words(s, c) + 1 * sizeof(char *));
	if (!words)
		return (NULL);
	words_count = 0;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || i == ft_strlen(s) - 1)
		{
			words[words_count] = malloc(((i - last_space) + 1) * sizeof(char));
			if (!words[words_count])
				return (NULL);
			words[words_count] = ft_strtrim(ft_substr(s, last_space + (last_space > 0), i + (count_words(s, c) == 1) - last_space), &c);
			words[words_count][i + (count_words(s, c) == 1) - last_space] = '\0';
			last_space = i;
			words_count++;
		}
		i++;
	}
	words[words_count] = NULL;
	return (words);
}
