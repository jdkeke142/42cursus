/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:21:53 by kjimenez          #+#    #+#             */
/*   Updated: 2022/11/29 19:34:00 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb, int recursive_pass);
int	ft_put_u_nbr_base(uintptr_t nbr, char *base, int recursive_pass);
int	ft_put_u_nbr(unsigned int nbr, int recursive_pass);
int	ft_printf(const char *str, ...);

#endif
