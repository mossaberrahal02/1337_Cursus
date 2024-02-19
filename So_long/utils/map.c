/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:25:57 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/19 23:11:03 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

// static void flood_fill2(char **arr, size_t x, size_t y, t_hw *nbr)
// {
// 	if (x < 0 || y < 0 || x >= nbr->nbr_h_map || y >= nbr->nbr_w_map)
// 		return ;
// 	if (arr[x][y] == '0'|| arr[x][y] == 'C'
// 		|| arr[x][y] == 'P')
// 	{
// 		arr[x][y] = 'X';
// 		flood_fill2(arr, x + 1, y, nbr);
// 		flood_fill2(arr, x - 1, y, nbr);
// 		flood_fill2(arr, x, y + 1, nbr);
// 		flood_fill2(arr, x, y - 1, nbr);
// 	}
// }

void	map(char *path, t_hw *nbr)
{
	char	**arr;
	char	**arr2;
	t_xy	player;
	int		i;
	int		j;

	arr = dup_map(path, nbr->nbr_h_map);
	arr2 = dup_map(path, nbr->nbr_h_map);
	//added
	// char **arr3 = dup_map(path, nbr->nbr_h_map);
	map_content(arr);
	has_only_walls(arr, nbr->nbr_h_map - 1, nbr->nbr_w_map);
	player_xy(arr, &player);
	
	
	// flood_fill2(arr3, player.x, player.y, nbr);

	
	flood_fill(arr2, player.x, player.y, nbr);
	//added
	// int x = 0;
	// while (arr3[x])
	// {
	// 	printf("arr3[%d]=== --> %s\n", x, arr3[x]);
	// 	x++;
	// }
	i = -1;
	while (arr2[++i] != NULL)
	{
		j = 0;
		printf("-->%s\n", arr2[i]);
		while (arr2[i][j])
		{
			if (arr2[i][j] == 'C' || arr2[i][j] == 'P')
				print_str_and_exit("invalid map (chi c maghadich yakolha P)");
			j++;
		}
	}
	ft_freee(arr2);
	ft_freee(arr);
}
