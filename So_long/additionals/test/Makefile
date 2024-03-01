# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 22:23:53 by hchaguer          #+#    #+#              #
#    Updated: 2024/02/25 15:20:11 by merrahal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NANE = so_long

CFLAGS = -Wall -Wextra -Werror

mlx = -lmlx -framework OpenGL -framework AppKit

CC = cc

SRCS =   so_long.c\
		 ./code/readmap.c\
		 ./code/check_errors.c\
		 ./code/check_shape.c\
		 ./code/checkall.c\
		 ./code/valid_path.c\
		 ./code/S.L_util.c\
		 ./code/extension.c\
		 ./code/buttons.c\
		 ./code/show_windows.c\
		./gnl/get_next_line.c\
		./gnl/get_next_line_utils.c\
		

OBJ = $(SRCS:.c=.o)

# .SILENT:
all: $(NANE)

$(NANE): $(OBJ)
	make -C ./libft
	make -C ./ft_printf
	$(CC) $(CFLAGS) $(mlx) $(OBJ) libft/libft.a ft_printf/libftprintf.a -o $(NANE)

#-fsanitize=address

clean: 
	rm -rf $(OBJ)
	make clean -C ./libft 
	make clean -C ./ft_printf

fclean: clean
	rm -rf $(NANE)
	make fclean -C ./libft
	make fclean -C ./ft_printf

re: fclean all 
