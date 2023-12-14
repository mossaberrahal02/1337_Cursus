NAME = gnl.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = get_next_line.c get_next_line_utils.c
OFILES = $(CFILES:.c=.o)

all : ${NAME}

${NAME} : $(OFILES)
	ar rc $(NAME) $?

%.o:%.c
	$(CC) $(CFLAGS) -c $?
clean :
	rm -f $(OFILES)
fclean : clean
	rm -f $(NAME)
re : fclean all