/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:36:34 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/20 22:31:26 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	size_t	i;
	char	*modified_s;

	if (!s)
		return (NULL);
	i = 0;
	modified_s = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!modified_s)
		return (NULL);
	while (s[i])
	{
		modified_s[i] = (*f)(i, s[i]);
		i++;
	}
	modified_s[i] = '\0';
	return (modified_s);
}
