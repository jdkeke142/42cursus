/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:29:16 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/19 17:18:50 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp_lst;

	temp_lst = lst;
	new_lst = NULL;
	while (temp_lst)
	{
		if (!new_lst)
			new_lst = ft_lstnew((*f)(temp_lst->content));
		else
			ft_lstadd_back(&new_lst, ft_lstnew((*f)(temp_lst->content)));
		(*del)(temp_lst->content);
		temp_lst = temp_lst->next;
	}
	return (new_lst);
}
