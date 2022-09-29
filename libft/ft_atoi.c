/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:20:32 by kjimenez          #+#    #+#             */
/*   Updated: 2022/09/29 14:39:37 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\v' ||
			c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	char_as_num;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (nptr[i])
	{
		char_as_num = nptr[i] - '0';
		if (char_as_num >= 0 && char_as_num <= 9)
			res = (res * 10) + char_as_num;
		else if (nptr[i] == '-')
		{
			if (sign == 1)
				sign = -1;
			else
				return (0);
		}
		else if (nptr[i] == '+')
			if (sign == 1)
				continue;
			else
				return (0);
		else if (!ft_isspace(nptr[i]))
			break;
		else
			continue;
		i++;
	}
	return (res * sign);
}
