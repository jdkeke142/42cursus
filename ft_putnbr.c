/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:40:45 by kjimenez          #+#    #+#             */
/*   Updated: 2022/12/07 16:40:51 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb, int recursive_pass)
{
	long		nb_long;
	static int	printed_count;

	if (!recursive_pass)
		printed_count = 0;
	nb_long = (long) nb;
	if (nb_long < 0)
	{
		printed_count += ft_putchar('-');
		nb_long = -nb_long;
	}
	if (nb_long < 10)
		printed_count += ft_putchar(nb_long + '0');
	else
	{
		ft_putnbr(nb_long / 10, 1);
		ft_putnbr(nb_long % 10, 1);
	}
	return (printed_count);
}
