/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:29:28 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/20 22:31:04 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
