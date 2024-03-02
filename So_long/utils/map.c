/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:25:57 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/02 16:42:59 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

void	check_0_c_p(char **arr2)
{
	int	i;
	int	j;

	i = -1;
	while (arr2[++i] != NULL)
	{
		j = 0;
		while (arr2[i][j])
		{
			if (arr2[i][j] == '0' || arr2[i][j] == 'C' || arr2[i][j] == 'P')
				print_str_and_exit("invalid map (chi c maghadich yakolha P)");
			j++;
		}
	}
}

void	check_e(char **arr2)
{
	int	i;
	int	j;

	i = -1;
	while (arr2[++i] != NULL)
	{
		j = 0;
		while (arr2[i][j])
		{
			if (arr2[i][j] == 'E')
				print_str_and_exit("invalid map (E is surrunded by walls)");
			j++;
		}
	}
}

void	map(char *path, t_hw *nbr)
{
	char	**arr;
	char	**arr2;
	t_xy	player;

	arr = dup_map(path);
	arr2 = dup_map(path);
	map_content(arr);
	has_only_walls(arr, nbr->nbr_h_map - 1, nbr->nbr_w_map);
	player_xy(arr, &player);
	flood_fill(arr2, player.x, player.y, nbr);
	check_0_c_p(arr2);
	flood_fill_e(arr2, player.x, player.y, nbr);
	check_e(arr2);
	ft_freee(arr2);
	ft_freee(arr);
}
