/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:51:17 by kjimenez          #+#    #+#             */
/*   Updated: 2022/09/30 16:00:47 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	str_len;
	char	*duplicated_str;
	size_t	i;

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
