# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 23:08:55 by hchaguer          #+#    #+#              #
#    Updated: 2022/11/21 23:08:59 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putnbrhex.c \
		ft_putstr.c \
		ft_putnbrunsigned.c \
		ft_putnbrhex_lower.c \
		checkinput.c

OBJS = ${SRCS:.c=.o}

all : ${NAME}

${NAME}: ${OBJS}

	ar -r ${NAME} ${OBJS}

clean: 
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re: fclean all 