/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:37:05 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/07 18:47:14 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_lst;
	t_list	*next_element;

	temp_lst = *lst;
	while (temp_lst)
	{
		next_element = temp_lst->next;
		(*del)(temp_lst->content);
		free(temp_lst);
		temp_lst = next_element;
	}
	lst = NULL;
}
