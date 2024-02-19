/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:25:00 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/19 23:15:04 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

void	flood_fill(char **arr, size_t x, size_t y, t_hw *nbr)
{
	if (x < 0 || y < 0 || x >= nbr->nbr_h_map || y >= nbr->nbr_w_map)
		return ;
	if (arr[x][y] == '0' || arr[x][y] == 'C'
		|| arr[x][y] == 'P')
	{
		arr[x][y] = 'X';
		flood_fill(arr, x + 1, y, nbr);
		flood_fill(arr, x - 1, y, nbr);
		flood_fill(arr, x, y + 1, nbr);
		flood_fill(arr, x, y - 1, nbr);
	}
}
