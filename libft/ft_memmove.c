/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:45:19 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/07 17:25:35 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_char;
	char		*src_char;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_char = (char *) dest;
	src_char = (char *) src;
	if ((src_char < dest_char) && (dest_char < src_char + n))
	{
		while (n > 0)
		{
			dest_char[n] = src_char[n];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest_char[i] = src_char[i];
			i++;
		}
	}
	return (dest);
}
