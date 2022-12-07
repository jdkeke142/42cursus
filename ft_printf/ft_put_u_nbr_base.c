/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:06:19 by kjimenez          #+#    #+#             */
/*   Updated: 2022/11/29 19:24:48 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_put_u_nbr_base(uintptr_t nbr, char *base, int recursive_pass)
{
	unsigned int	base_len;
	static int		printed_count;

	if (!recursive_pass)
		printed_count = 0;
	base_len = ft_strlen(base);
	if (nbr < base_len)
		printed_count += ft_putchar(base[nbr]);
	else
	{
		ft_put_u_nbr_base(nbr / base_len, base, 1);
		ft_put_u_nbr_base(nbr % base_len, base, 1);
	}
	return (printed_count);
}
