/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:51:17 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/20 22:30:35 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
