/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:33:59 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/20 21:28:59 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*allocated;

	if (nitems > 46340 || size > 46340)
		return (NULL);
	allocated = malloc(nitems * size);
	if (!allocated)
		return (NULL);
	ft_bzero(allocated, nitems * size);
	return (allocated);
}
