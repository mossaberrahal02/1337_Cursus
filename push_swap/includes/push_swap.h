#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#include "../libs/ft_printf/ft_printf.h"
#include "../libs/get_next_line/get_next_line.h"
#include "../libs/libft/libft.h"


long	ft_atol(const char *str, char **av2);
void    check_duplicates(t_list *head);
void    ft_freee(char **str);
void    print_str_exit_0(char *str);
void    print_str_exit_1(char *str);
void    convert_args(char **av2);
char    **args(int ac, char **av);
void    check_args(int ac, char **av2);
void    args_are_digits(int ac, char **av2);

#endif /* PUSH_SWAP_H */
