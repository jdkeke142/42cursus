/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:14:32 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/20 21:27:16 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	set_contains(char const *set, char const c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	*ft_strtrim_boundaries(char	const *s1, char const *set, int boundaries[2])
{
	int		i;

	boundaries[0] = 0;
	while (s1[boundaries[0]] && set_contains(set, s1[boundaries[0]]))
		boundaries[0]++;
	i = boundaries[0];
	boundaries[1] = boundaries[0];
	while (s1[i])
	{
		if (!set_contains(set, s1[i]))
			boundaries[1] = i;
		i++;
	}
	return (boundaries);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	int		i;
	int		trimmed_size;
	int		boundaries[2];

	if (!s1)
		return (NULL);
	ft_strtrim_boundaries(s1, set, boundaries);
	trimmed_size = (boundaries[1] - boundaries[0]) + 1;
	i = 0;
	trimmed_str = ft_calloc(trimmed_size + 1, sizeof(char));
	if (!trimmed_str)
		return (NULL);
	while (i < trimmed_size)
	{
		trimmed_str[i] = s1[boundaries[0] + i];
		i++;
	}
	trimmed_str[i] = '\0';
	return (trimmed_str);
}
