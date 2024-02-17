/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_xy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:26:13 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/17 14:59:31 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

void	player_xy(char **arr, t_xy *player)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		j = 0;
		while (arr[i][j])
		{
			if (arr[i][j] == 'P')
			{
				player->x = i;
				player->y = j;
			}
			j++;
		}
		i++;
	}
}
