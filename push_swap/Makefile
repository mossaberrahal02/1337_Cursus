ARCHIVE = lib.a
NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra #-fsanitize=address -g3 #-Werror


SRC_FILES = src/main.c \
parsing/check_args.c parsing/check_duplicates.c parsing/ft_atol.c parsing/ft_freee.c parsing/print_str_exit.c \
libs/ft_printf/ft_printf.c libs/ft_printf/ft_put_adress.c libs/ft_printf/ft_put_hexdeci_lc.c libs/ft_printf/ft_put_hexdeci_uc.c libs/ft_printf/ft_put_unsigned_decimal.c \
libs/ft_printf/ft_putchar.c libs/ft_printf/ft_putnbr.c libs/ft_printf/ft_putstr.c \
libs/get_next_line/get_next_line.c libs/get_next_line/get_next_line_utils.c \
libs/libft/ft_atoi.c libs/libft/ft_bzero.c libs/libft/ft_calloc.c libs/libft/ft_isalnum.c libs/libft/ft_isalpha.c libs/libft/ft_isascii.c libs/libft/ft_putchar_fd.c libs/libft/ft_itoa.c \
libs/libft/ft_isdigit.c libs/libft/ft_isprint.c libs/libft/ft_memchr.c libs/libft/ft_memcmp.c libs/libft/ft_memcpy.c libs/libft/ft_strtrim.c libs/libft/ft_split.c libs/libft/ft_putstr_fd.c libs/libft/ft_strmapi.c \
libs/libft/ft_memmove.c libs/libft/ft_memset.c libs/libft/ft_strchr.c libs/libft/ft_strdup.c libs/libft/ft_strrchr.c libs/libft/ft_tolower.c libs/libft/ft_strjoin.c libs/libft/ft_putnbr_fd.c \
libs/libft/ft_strlcat.c libs/libft/ft_strlcpy.c libs/libft/ft_strlen.c  libs/libft/ft_strncmp.c libs/libft/ft_strnstr.c libs/libft/ft_toupper.c libs/libft/ft_substr.c libs/libft/ft_putendl_fd.c \
libs/libft/ft_lstlast.c libs/libft/ft_lstadd_front libs/libft/ft_lstadd_back.c  libs/libft/ft_lstnew.c
OBJ_FILES = $(SRC_FILES:.c=.o)

all: ${NAME}

${NAME}: ${OBJ_FILES}
	ar rc ${ARCHIVE} $?
	${CC} ${FLAGS} parsing/check_args.c -o ${NAME} ${ARCHIVE}

%.o:%.c
	${CC} ${FLAGS} -c $^ -o $@

clean:
	rm -f ${OBJ_FILES}

fclean: clean
	rm -f ${NAME}
	rm -f ${ARCHIVE}
re: fclean all

git :
	git add ../push_swap/
	git commit -m "push_swap"
	git push