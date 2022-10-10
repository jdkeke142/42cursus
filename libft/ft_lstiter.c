/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:23:37 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/10 14:25:19 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp_lst;

	temp_lst = lst;
	while (temp_lst)
	{
		(*f)(temp_lst->content);
		temp_lst = temp_lst->next;
	}
}
