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

#include "ft_printf.h"
#include <stdarg.h>

static void	ft_printf_write_ptr(int *printed_count, va_list	*list)
{
	intptr_t	ptr_identifier;

	ptr_identifier = va_arg(*list, uintptr_t);
	if (!ptr_identifier)
		*printed_count += ft_putstr("(nil)");
	else
	{
		*printed_count += ft_putstr("0x");
		*printed_count += ft_put_u_nbr_base(ptr_identifier,
				"0123456789abcdef", 0);
	}
}

static void	ft_printf_write_str(int *printed_count, va_list	*list)
{
	char		*str_identifier;

	str_identifier = va_arg(*list, char *);
	if (!str_identifier)
		str_identifier = "(null)";
	*printed_count += ft_putstr(str_identifier);
}

static void	ft_printf_write(char c, int *printed_count, va_list	*list)
{
	if (c == 'c')
		*printed_count += ft_putchar(va_arg(*list, int));
	else if (c == 's')
		ft_printf_write_str(printed_count, list);
	else if (c == 'p')
		ft_printf_write_ptr(printed_count, list);
	else if (c == 'd' || c == 'i')
		*printed_count += ft_putnbr(va_arg(*list, int), 0);
	else if (c == 'u')
		*printed_count += ft_put_u_nbr(va_arg(*list, int), 0);
	else if (c == 'x')
		*printed_count += ft_put_u_nbr_base(va_arg(*list, unsigned int),
				"0123456789abcdef", 0);
	else if (c == 'X')
		*printed_count += ft_put_u_nbr_base(va_arg(*list, unsigned int),
				"0123456789ABCDEF", 0);
	else if (c == '%')
		*printed_count += ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		printed_count;

	if (!str)
		return (-1);
	i = 0;
	printed_count = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			ft_printf_write(str[i + 1], &printed_count, &list);
			i = i + 2;
		}
		else
		{
			printed_count += ft_putchar(str[i]);
			i++;
		}
	}
	va_end(list);
	return (printed_count);
}
