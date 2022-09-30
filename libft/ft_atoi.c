/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:20:32 by kjimenez          #+#    #+#             */
/*   Updated: 2022/09/30 12:54:59 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\v'
		|| c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		char_as_num;
	int		res;
	int		sign;
	int 	sign_changed;
	int 	number_initialized;

	sign = 1;
	sign_changed = 0;
	i = 0;
	res = 0;
	number_initialized = 0;
	while (nptr[i])
	{
		char_as_num = nptr[i] - '0';
		if (char_as_num >= 0 && char_as_num <= 9)
		{

			res = (res * 10) + char_as_num;
			number_initialized = 1;
		}
		else if (nptr[i] == '+' || nptr[i] == '-')
		{
			if (sign_changed)
				return (0);
			if (number_initialized)
				break;
			if (nptr[i] == '-')
				sign = -1;
			sign_changed = 1;
			number_initialized = 1;
		}
		else if (ft_isspace(nptr[i]) && number_initialized)
			break;
		else if (!ft_isspace(nptr[i]))
			break;
		i++;
	}
	return (res * sign);
}
