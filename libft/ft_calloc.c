/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:33:59 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/03 16:45:31 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	int	i;
	int	*allocated;

	i = 0;
	allocated = (int *) malloc(nitems * size);
	if (!allocated)
		return (NULL);
	while (allocated[i])
	{
		allocated[i] = 0;
		i++;
	}
	return (allocated);
}
