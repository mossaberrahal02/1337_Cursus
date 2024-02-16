/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:23:36 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/16 14:04:29 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "So_long.h"

int main(int ac, char *av[])
{
    // t_mlx   data;
    //t_img   img;//useles till now 
    if (ac == 2)
    {
        map_checker(av[1]);
        ft_printf("\nmap hiyaaa hadik\n");
    }
    else
        print_str_and_exit("many or less main arguments");
    // system("leaks so_long");
    return (0); 
}
