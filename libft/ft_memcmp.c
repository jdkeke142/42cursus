/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:32:41 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/03 18:01:15 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1_char;
	char	*s2_char;

	s1_char = (char *) s1;
	s2_char = (char *) s2;
	i = 0;
	while (i < n - 1 && *s1_char && *s2_char && *s1_char == *s2_char)
	{
		s1_char++;
		s2_char++;
		i++;
	}
	return (s1_char[i] - s2_char[i]);
}
