/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:37:10 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/03 16:16:01 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

void	display_windows(t_mlx_data *data, char *path)
{
	t_hw	hw;

	data->path = path;
	data->map = dup_map(data->path);
	hw.nbr_h_map = map_h(data->map);
	hw.nbr_w_map = map_w(data->map[0]);
	data->mlx_ptr = mlx_init();
	if (!(data->mlx_ptr))
		print_str_and_exit("data->mlx_ptr is null");
	import_images(data, &hw);
	data->win_ptr = mlx_new_window(data->mlx_ptr, hw.nbr_w_map * 33,
			hw.nbr_h_map * 33, "So_long");
	if (!(data->win_ptr))
	{
		free(data->mlx_ptr);
		print_str_and_exit("data->win_ptr is null");
	}
	put_images(data);
	data->nbr_collect = count_collect(data->map);
	mlx_key_hook(data->win_ptr, escape_udrl, data);
	mlx_hook(data->win_ptr, 17, 0, mouse_exit, data);
}
