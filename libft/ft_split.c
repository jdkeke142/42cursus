/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:42:32 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/20 21:27:43 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int		i;
	int		words_count;

	i = 0;
	words_count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words_count++;
		i++;
	}
	return (words_count);
}

char	*malloc_word(char const *s, char c, int start)
{
	char	*word;
	int		i;
	int		j;

	i = start;
	while (s[i] && s[i] != c)
		i++;
	word = malloc((i - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && s[i] != c)
	{
		word[j] = s[i];
		i++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;
	int		words_count;

	if (s == NULL)
		return (NULL);
	i = 0;
	words_count = 0;
	words = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			words[words_count] = malloc_word(s, c, i);
			if (!words[words_count])
				return (NULL);
			words_count++;
		}
		i++;
	}
	words[words_count] = NULL;
	return (words);
}
