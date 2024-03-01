/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:23:33 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/25 15:03:22 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_args(int ac, char **av)
{
	int	fd;

	if (ac != 2)
	{
		ft_printf("Argument are not enough !!!");
		exit(1);
	}
	if (check_exe(av[1]) == 1)
	{
		ft_printf("error in exe!!!");
		exit(1);
	}
	fd = open(av[1], O_RDONLY | O_DIRECTORY);
	if (fd > 0)
	{
		ft_printf("Is a directory!!!");
		exit(1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_printf("file does not exist!!!");
		exit(1);
	}
}

int	main(int ac, char **av)
{
	t_index	all;
	char	**tmp;

	tmp = NULL;
	check_args(ac, av);
	tmp = ft_readmap1(&all, av[1]);
	all.split = ft_readmap(av[1]);
	checksplit(all.split);
	check_path(tmp, &all);
	show_win(av[1], &all);
}
