/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:45:08 by kjimenez          #+#    #+#             */
/*   Updated: 2022/09/26 15:52:40 by kjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	memset_str[] = "coucou";
	char	bzero_str[] = "salut";
	char	memcpy_src[] = "coucou";
	char	memcpy_dest[] = "tttttt ca va";

	printf("isalpha test 'a': %d\n", ft_isalpha('a'));
	printf("isalpha test 'Z': %d\n", ft_isalpha('Z'));
	printf("isalpha test '1': %d\n", ft_isalpha('1'));
	printf("\n");
	printf("isdigit test 'a': %d\n", ft_isdigit('a'));
	printf("isdigit test 'Z': %d\n", ft_isdigit('Z'));
	printf("isdigit test '3': %d\n", ft_isdigit('3'));
	printf("\n");
	printf("isalnum test 'a': %d\n", ft_isalnum('a'));
	printf("isalnum test '5': %d\n", ft_isalnum('5'));
	printf("isalnum test '/': %d\n", ft_isalnum('/'));
	printf("\n");
	printf("isascii test '0': %d\n", ft_isascii(0));
	printf("isascii test '127: %d\n", ft_isascii(127));
	printf("isascii test '128': %d\n", ft_isascii(128));
	printf("\n");
	printf("isprint test '31': %d\n", ft_isprint(31));
	printf("isprint test '32': %d\n", ft_isprint(32));
	printf("isprint test '126': %d\n", ft_isprint(126));
	printf("isprint test '127': %d\n", ft_isprint(127));
	printf("\n");
	printf("strlen test 'salut': %ld\n", ft_strlen("salut"));
	printf("strlen test '': %ld\n", ft_strlen(""));
	printf("\n");
	printf("memset test: %s\n", (char *) ft_memset(memset_str, '*', 30));
	printf("\n");
	ft_bzero(bzero_str, 0);
	printf("bzero test: %s\n", bzero_str);
	printf("\n");
	ft_memcpy(memcpy_dest, memcpy_src, 4);
	printf("memcpy test: %s\n", memcpy_dest);
	printf("tolower test 'A': %c\n", ft_tolower('A'));
	printf("tolower test 'a': %c\n", ft_tolower('a'));
	printf("tolower test '1': %c\n", ft_tolower('1'));
	printf("\n");
	printf("toupper test 'A': %c\n", ft_toupper('A'));
	printf("toupper test 'a': %c\n", ft_toupper('a'));
	printf("tolower test '1': %c\n", ft_toupper('1'));
}
