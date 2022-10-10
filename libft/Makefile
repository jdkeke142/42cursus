# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 11:53:31 by kjimenez          #+#    #+#              #
#    Updated: 2022/10/10 15:16:36 by kjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

$(NAME):
	@gcc -c -Wall -Werror -Wextra *.c
	@ar -rc libft.a *.o
so:
	@gcc -nostartfiles -shared -o libft.so *.c
clean:
	@find . -name $(NAME) -delete

