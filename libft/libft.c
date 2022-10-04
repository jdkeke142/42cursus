/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:45:08 by kjimenez          #+#    #+#             */
/*   Updated: 2022/10/04 17:24:07 by kjimenez         ###   ########.fr       */
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
	char	dirty_str[] = "    this is a dirty string     ";
	char	to_remove[] = " ";

	printf("%s", ft_strtrim(dirty_str, to_remove));
}
