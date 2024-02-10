NAME = solong
CC = cc
FLAGS = -Wall -Wextra #-Werror
CFILES = main.c
OFILES = $(subst .c,.o,$(CFILES))
LIBS = -lmlx -framework OpenGL -framework Appkit ft_printf/libftprintf.a get_next_line/gnl.a

all: ${NAME}

${NAME}: ${OFILES}
	${CC} ${FLAGS} ${CFILES} -o ${NAME} ${LIBS} 

clean:
	rm -f ${OFILES}

fclean: clean
	rm -f ${NAME}
	
re: fclean all

git:
	git add ../So_long/
	git commit -m "so_long"
	git push

.PHONY: all clean fclean re