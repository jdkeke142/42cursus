/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:30:22 by kjimenez          #+#    #+#             */
/*   Updated: 2022/11/29 19:35:01 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u_nbr(unsigned int nbr, int recursive_pass)
{
	static int	printed_count;

	if (!recursive_pass)
		printed_count = 0;
	if (nbr < 10)
		printed_count += ft_putchar(nbr + '0');
	if (nbr > 9)
	{
		ft_put_u_nbr(nbr / 10, 1);
		ft_put_u_nbr(nbr % 10, 1);
	}
	return (printed_count);
}
