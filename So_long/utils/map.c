/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:25:57 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/17 11:50:12 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../So_long.h"

void	map(char *path, t_hw *nbr)
{
	char	**arr;
	char	**arr2;
	t_xy	player;
	int		i;
	int		j;

	arr = dup_map(path, nbr->nbr_h_map);
	arr2 = dup_map(path, nbr->nbr_h_map);
	map_content(arr);
	has_only_walls(arr, nbr->nbr_h_map - 1, nbr->nbr_w_map);
	player_xy(arr, &player);
	flood_fill(arr2, player.x, player.y, nbr);
	i = -1;
	while (arr2[++i] != NULL)
	{
		j = 0;
		while (arr2[i][j])
		{
			if (arr2[i][j] == 'C' || arr2[i][j] == 'P' || arr2[i][j] == 'E')
				print_str_and_exit("map can't b played");
			j++;
		}
	}
	ft_freee(arr2);
	ft_freee(arr);
}
