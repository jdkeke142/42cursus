# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjimenez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 19:18:25 by kjimenez          #+#    #+#              #
#    Updated: 2022/12/07 18:00:02 by kjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS			=	ft_putchar.c ft_put_u_nbr_base.c ft_putstr.c \
					ft_putnbr.c ft_put_u_nbr.c ft_printf.c
OBJS			= $(SRCS:.c=.o)

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
