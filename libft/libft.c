/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:45:08 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/03 18:24:34 by kjimenez         ###   ########.fr       */
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
	char	*s1 = "oh no not the empty string !";
	char	*s2 = "";
	size_t	max = 0;

	char	*i1 = strnstr(s1, s2, max);
	char	*i2 = ft_strnstr(s1, s2, max);
	
	printf("STD : %s\n", i1);
	printf("FT : %s", i2);

	ft_substr(NULL, 0, 12);
}
