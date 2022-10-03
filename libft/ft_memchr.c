/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:48:46 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/03 16:58:19 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_char;
	size_t	s_len;

	s_char = (char *) s;
	s_len = ft_strlen(s_char);
	i = 0;
	if (c == '\0' && n >= s_len)
		return (&s_char[s_len]);
	while (i < n && s_char[i])
	{
		if (s_char[i] == c)
			return (&s_char[i]);
		i++;
	}
	return (NULL);
}
