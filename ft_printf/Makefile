NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_printf.c ft_put_adress.c ft_put_hexdeci_lc.c ft_put_hexdeci_uc.c \
ft_put_unsigned_decimal.c ft_putchar.c ft_putnbr.c ft_putstr.c
OFILES = $(CFILES:%.c=%.o)

all : ${NAME}

${NAME} : $(OFILES)
	ar rc $(NAME) $?

$(OFILES): %.o:%.c
	$(CC) $(CFLAGS) -c $?
clean :
	rm -f $(OFILES)
fclean : clean
	rm -f $(NAME)
re : fclean all
