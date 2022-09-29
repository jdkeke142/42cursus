/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:45:19 by kjimenez          #+#    #+#             */
/*   Updated: 2022/09/29 14:19:41 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned int			dest_len;
	char					*dest_dereference;
	const char				*src_dereference;

	dest_dereference = dest;
	src_dereference = src;
	i = 0;
	if (src < dest)
	{
		dest_len = ft_strlen(dest_dereference);
		while (i < n && i < dest_len)
		{
			dest_dereference[dest_len-i] = src_dereference[dest_len-i];
			i++;
		}
		//back to front
	}
	else if (dest < src)
	{
		//front to back
		while (i < n && src_dereference[i])
		{
			dest_dereference[i] = src_dereference[i];
			i++;
		}
	}
	return (dest);
}
