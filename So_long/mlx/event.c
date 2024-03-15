/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:36:30 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/03 16:26:30 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

void	clear_put_window(t_mlx_data *data)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	put_images(data);
}

void	uldr(int keycode, t_mlx_data *data)
{
	if (keycode == 0)
	{
		left(data);
		clear_put_window(data);
	}
	else if (keycode == 2)
	{
		right(data);
		clear_put_window(data);
	}
	else if (keycode == 13)
	{
		up(data);
		clear_put_window(data);
	}
	else if (keycode == 1)
	{
		down(data);
		clear_put_window(data);
	}
}

int	escape_udrl(int keycode, t_mlx_data *data)
{
	if (keycode == 53)
	{
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);
		exit(0);
	}
	else
		uldr(keycode, data);
	return (0);
}

int	mouse_exit(t_mlx_data *data)
{
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	exit(0);
	return (0);
}
