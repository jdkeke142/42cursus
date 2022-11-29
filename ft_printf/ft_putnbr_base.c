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

#include <unistd.h>
#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr_long;
	int		base_len;

	nbr_long = (long) nbr;
	base_len = ft_strlen(base);
	if (nbr_long < 0)
	{
		ft_putchar('-');
		nbr_long = -nbr_long;
	}
	if (nbr_long < base_len)
		ft_putchar(base[nbr_long]);
	else
	{
		ft_putnbr_base(nbr_long / base_len, base);
		ft_putnbr_base(nbr_long % base_len, base);
	}
}
