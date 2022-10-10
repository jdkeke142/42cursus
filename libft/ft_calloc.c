/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:33:59 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/10 16:55:57 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*allocated;

	allocated = malloc(nitems * size);
	if (!allocated)
		return (NULL);
	ft_bzero(allocated, nitems * size);
	return (allocated);
}
