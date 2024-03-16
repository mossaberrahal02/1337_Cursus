/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str_exit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 02:27:16 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/16 02:56:13 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/push_swap.h"

void print_str_exit_0(char *str)
{
    ft_putstr(str);
    write(2, "\n",1);
    exit(0);
}

void print_str_exit_1(char *str)
{
    ft_putstr(str);
    write(2, "\n",1);
    exit(1);
}
