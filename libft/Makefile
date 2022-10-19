# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 11:53:31 by kjimenez          #+#    #+#              #
#    Updated: 2022/10/19 17:21:28 by kjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all:
	@gcc -c -Wall -Werror -Wextra *.c
	@ar -rc libft.a *.o
bonus: all
so:
	@gcc -nostartfiles -shared -o libft.so *.c
clean:
	@rm -f *.o
fclean:
	@rm -f *.o libft.a
re: fclean all
