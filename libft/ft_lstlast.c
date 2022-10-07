/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:07:56 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/07 18:21:39 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp_lst;

	if (lst == NULL)
		return (NULL);
	temp_lst = lst;
	while (temp_lst->next)
		temp_lst = temp_lst->next;
	return (temp_lst);
}
