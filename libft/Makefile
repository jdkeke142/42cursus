# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 11:53:31 by kjimenez          #+#    #+#              #
#    Updated: 2022/10/10 15:39:13 by kjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all:
	@gcc -c -Wall -Werror -Wextra *.c
	@ar -rc libft.a *.o
so:
	@gcc -nostartfiles -shared -o libft.so *.c
clean:
	@rm -f *.o
fclean:
	@rm -f *.o libft.a
re: fclean all
