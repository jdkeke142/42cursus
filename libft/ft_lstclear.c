/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:37:05 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/10 14:16:38 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_lst;
	t_list	*to_clear;

	if (!lst || !del)
		return ;
	temp_lst = *lst;
	while (temp_lst)
	{
		to_clear = temp_lst;
		temp_lst = temp_lst->next;
		(*del)(to_clear->content);
		free(to_clear);
	}
	*lst = NULL;
}
