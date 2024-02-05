CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = needed.a
CFILES = .c .c .c
OFILES = $(CFILES.c:=.o)

all:${NAME}

${NAME} : ${OFILES}
	ar rc $(NAME) $?

clean:

fclean:

re: fclean all

git :
	git add ../So_long/
	git commit -m "so_long"
	git push