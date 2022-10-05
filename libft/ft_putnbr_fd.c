/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:51:15 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/05 17:56:57 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_char(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr_long;

	nbr_long = n;
	if (nbr_long < 0)
	{
		nbr_long = -nbr_long;
		ft_putnbr_char('-', fd);
	}
	if (nbr_long < 10)
		ft_putnbr_char(nbr_long + '0', fd);
	if (nbr_long > 9)
	{
		ft_putnbr_fd(nbr_long / 10, fd);
		ft_putnbr_fd(nbr_long % 10, fd);
	}
}	
