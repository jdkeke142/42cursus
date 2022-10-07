/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:45:08 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/07 16:32:56 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
# ifdef linux
#  pragma GCC diagnostic ignored "-Wunused-value"
#  include <bsd/string.h>
# endif

int	main(void)
{
	char	n[40] = "2147483649000000";

	printf("std number is %d.\n", atoi(n));
	printf("ft Number is %d.\n", ft_atoi(n));
}
