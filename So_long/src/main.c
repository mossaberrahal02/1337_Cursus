/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:23:36 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/08 16:58:58 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

int	main(int ac, char *av[])
{
	t_mlx_data	data;

	ft_memset(&data, 0, sizeof(t_mlx_data));
	if (ac == 2)
	{
		map_checker(av[1]);
		ft_printf("\nmap hiyaaa hadik\n");
		display_windows(&data, av[1]);
		mlx_loop(data.mlx_ptr);
	}
	else
		print_str_and_exit("many or less main arguments");
	system("leaks so_long");
	ft_freee(data.map);
	return (0);
}
