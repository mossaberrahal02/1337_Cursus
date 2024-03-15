/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:35:44 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/03 16:15:11 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

void	left(t_mlx_data *data)
{
	if (data->map[data->p_position.x][(data->p_position.y) - 1] == '0'
		|| data->map[data->p_position.x][(data->p_position.y) - 1] == 'C')
	{
		(data->nbr_moves)++;
		ft_printf("%d\n", data->nbr_moves);
		if (data->map[data->p_position.x][(data->p_position.y) - 1] == 'C')
			(data->nbr_collect)--;
		data->map[data->p_position.x][(data->p_position.y) - 1] = 'P';
		data->map[data->p_position.x][(data->p_position.y)] = '0';
		(data->p_position.y)--;
	}
	else if (data->map[data->p_position.x][(data->p_position.y) - 1] == 'E')
	{
		if (!(data->nbr_collect))
		{
			ft_printf("------>you won\n");
			exit(0);
		}
	}
}

void	right(t_mlx_data *data)
{
	if (data->map[data->p_position.x][(data->p_position.y) + 1] == '0'
		|| data->map[data->p_position.x][(data->p_position.y) + 1] == 'C')
	{
		(data->nbr_moves)++;
		ft_printf("%d\n", data->nbr_moves);
		if (data->map[data->p_position.x][(data->p_position.y) + 1] == 'C')
			(data->nbr_collect)--;
		data->map[data->p_position.x][(data->p_position.y) + 1] = 'P';
		data->map[data->p_position.x][(data->p_position.y)] = '0';
		(data->p_position.y)++;
	}
	else if (data->map[data->p_position.x][(data->p_position.y) + 1] == 'E')
	{
		if (!(data->nbr_collect))
		{
			ft_printf("you won\n");
			exit(0);
		}
	}
}

void	up(t_mlx_data *data)
{
	if (data->map[(data->p_position.x) - 1][(data->p_position.y)] == '0'
		|| data->map[(data->p_position.x) - 1][(data->p_position.y)] == 'C')
	{
		(data->nbr_moves)++;
		ft_printf("%d\n", data->nbr_moves);
		if (data->map[(data->p_position.x) - 1][(data->p_position.y)] == 'C')
			(data->nbr_collect)--;
		data->map[(data->p_position.x) - 1][(data->p_position.y)] = 'P';
		data->map[(data->p_position.x)][(data->p_position.y)] = '0';
		(data->p_position.x)--;
	}
	else if (data->map[(data->p_position.x) - 1][(data->p_position.y)] == 'E')
	{
		if (!(data->nbr_collect))
		{
			ft_printf("you won\n");
			exit(0);
		}
	}
}

void	down(t_mlx_data *data)
{
	if (data->map[(data->p_position.x) + 1][(data->p_position.y)] == '0'
		|| data->map[(data->p_position.x) + 1][(data->p_position.y)] == 'C')
	{
		(data->nbr_moves)++;
		ft_printf("%d\n", data->nbr_moves);
		if (data->map[(data->p_position.x) + 1][(data->p_position.y)] == 'C')
			(data->nbr_collect)--;
		data->map[(data->p_position.x) + 1][(data->p_position.y)] = 'P';
		data->map[(data->p_position.x)][(data->p_position.y)] = '0';
		(data->p_position.x)++;
	}
	else if (data->map[(data->p_position.x) + 1][(data->p_position.y)] == 'E')
	{
		if (!(data->nbr_collect))
		{
			ft_printf("you won\n");
			exit(0);
		}
	}
}
