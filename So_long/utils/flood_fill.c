/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:25:00 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/02 16:54:22 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

void	flood_fill(char **arr, int x, int y, t_hw *nbr)
{
	if (x < 0 || y < 0 || x >= nbr->nbr_h_map || y >= nbr->nbr_w_map)
		return ;
	if (arr[x][y] == '0' || arr[x][y] == 'C' || arr[x][y] == 'P')
	{
		arr[x][y] = 'X';
		flood_fill(arr, x + 1, y, nbr);
		flood_fill(arr, x - 1, y, nbr);
		flood_fill(arr, x, y + 1, nbr);
		flood_fill(arr, x, y - 1, nbr);
	}
}

void	flood_fill_e(char **arr, int x, int y, t_hw *nbr)
{
	if (x < 0 || y < 0 || x >= nbr->nbr_h_map || y >= nbr->nbr_w_map)
		return ;
	if (arr[x][y] == 'X' || arr[x][y] == 'P' || arr[x][y] == 'E')
	{
		arr[x][y] = '9';
		flood_fill_e(arr, x + 1, y, nbr);
		flood_fill_e(arr, x - 1, y, nbr);
		flood_fill_e(arr, x, y + 1, nbr);
		flood_fill_e(arr, x, y - 1, nbr);
	}
}
