/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:01:14 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/20 22:35:45 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (c >= 256)
		c -= 256;
	i = ft_strlen(s) - 1;
	if (c == '\0')
		return ((char *) &s[ft_strlen(s)]);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
