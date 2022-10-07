/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:20:32 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/07 17:44:47 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_atoi_whitespace(const char *nptr, int *i)
{
	while (nptr[*i] == '\t' || nptr[*i] == '\n' || nptr[*i] == '\v'
		|| nptr[*i] == '\f' || nptr[*i] == '\v'
		|| nptr[*i] == '\r' || nptr[*i] == ' ')
		(*i)++;
}

int	ft_atoi_sign(const char *nptr, int *i)
{
	int	sign;
	int	sign_changed;

	sign = 1;
	sign_changed = 0;
	while (nptr[*i] == '+' || nptr[*i] == '-')
	{
		if (sign_changed)
			sign = 0;
		if (nptr[*i] == '-')
			sign = -sign;
		sign_changed = 1;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	int			i;
	int			res;
	int			sign;

	i = 0;
	ft_atoi_whitespace(nptr, &i);
	sign = ft_atoi_sign(nptr, &i);
	res = 0;
	while (nptr[i] - '0' >= 0 && nptr[i] - '0' <= 9)
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}
