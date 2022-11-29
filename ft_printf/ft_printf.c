/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:21:32 by kjimenez          #+#    #+#             */
/*   Updated: 2022/11/29 19:42:52 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;

	i = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			if (str[i + 1] == 'c')
				ft_putchar(va_arg(list, int));
			else if (str[i + 1] == 's')
				ft_putstr(va_arg(list, char *));
			else if (str[i + 1] == 'd' || str[i + 1] == 'i')
				ft_putnbr_base(va_arg(list, int), "0123456789");
			else if (str[i + 1] == 'u')
				ft_putunbr(va_arg(list, unsigned int));
			else if (str[i + 1] == 'x')
				ft_putnbr_base(va_arg(list, int), "0123456789abcdef");
			else if (str[i + 1] == 'X')
				ft_putnbr_base(va_arg(list, int), "0123456789ABCDEF");
			else if (str[i + 1] == '%')
				ft_putchar('%');
			i = i + 2;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	va_end(list);
	return (0);
}

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_printf("This is a test : %%\n");
	printf("This is a test : %%\n");
	return (0);
}
