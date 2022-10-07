/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:03:20 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/07 18:06:25 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*temp_lst;

	temp_lst = lst;
	size = 0;
	while (temp_lst)
	{
		size++;
		temp_lst = temp_lst->next;
	}
	return (size);
}
