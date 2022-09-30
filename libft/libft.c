/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:45:08 by kjimenez          #+#    #+#             */
/*   Updated: 2022/09/30 15:43:31 by kjimenez         ###   ########.fr       */
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
	char	one[30] = "145";
	char	one2[30] = "145";
	char	two[] = "ca va ?";
	char	two2[] = "ca va ?";

	int std_return = strlcat(NULL, two2, 0);
	int ft_return = ft_strlcat(NULL, two, 0);
	printf("std strlcat test 1: %s | return: %d\n", one2, std_return);
	printf("ft strlcat test 1: %s | return: %d\n", one, ft_return);
}
