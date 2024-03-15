/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:33:53 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/03 16:27:00 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

void	put_wall(t_mlx_data *data, int i, int j)
{
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->pers_images.img_1, j * 33, i * 33);
}

void	put_collec(t_mlx_data *data, int i, int j)
{
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->pers_images.c_img, j * 33, i * 33);
}

void	put_player(t_mlx_data *data, int i, int j)
{
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->pers_images.p_img, j * 33, i * 33);
}

void	put_exit(t_mlx_data *data, int i, int j)
{
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->pers_images.e_img, j * 33, i * 33);
}

void	put_images(t_mlx_data *data)
{
	int	i;
	int	j;

	i = -1;
	while (data->map[++i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if ((data->map[i][j]) == '1')
				put_wall(data, i, j);
			else if ((data->map[i][j]) == 'C')
				put_collec(data, i, j);
			else if ((data->map[i][j]) == 'P')
			{
				data->p_position.x = i;
				data->p_position.y = j;
				put_player(data, i, j);
			}
			else if ((data->map[i][j]) == 'E')
				put_exit(data, i, j);
			j++;
		}
	}
}
