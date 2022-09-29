# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 11:53:31 by kjimenez          #+#    #+#              #
#    Updated: 2022/09/29 12:29:29 by kjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

$(NAME):
	@gcc -Wall -Werror -Wextra *.c -o $(NAME)
so:
	@gcc -nostartfiles -shared -o libft.so *.c
clean:
	@find . -name $(NAME) -delete

