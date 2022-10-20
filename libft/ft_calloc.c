/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:33:59 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/20 22:27:47 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	int		mult;
	void	*allocated;

	mult = nitems * size;
	if (nitems != 0 && mult / nitems != size)
		return (NULL);
	allocated = malloc(nitems * size);
	if (!allocated)
		return (NULL);
	ft_bzero(allocated, nitems * size);
	return (allocated);
}
