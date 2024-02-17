NAME		= utils.a
CFLAGS		= -Wall -Werror -Wextra
FILES		= dup_map.c flood_fill.c ft_strlen_no_new_line.c has_only_walls.c map_checker.c \
map_content.c map_h_w_checkWidth.c map.c path_checker.c player_xy.c print_str_and_exit.c
OBJ			= $(FILES:.c=.o)
CC 			= cc

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) -c $?

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all