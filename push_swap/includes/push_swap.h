#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

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
