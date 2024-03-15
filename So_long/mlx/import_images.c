/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   import_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:33:09 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/03 16:17:48 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

void	import_images(t_mlx_data *data, t_hw *hw)
{
	data->pers_images.img_1 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./textures/Wall.xpm", &(hw->nbr_w_img), &(hw->nbr_h_img));
	if (!(data->pers_images.img_1))
		print_str_and_exit("the file of (Wall) is null");
	data->pers_images.c_img = mlx_xpm_file_to_image(data->mlx_ptr,
			"./textures/Coin.xpm", &(hw->nbr_w_img), &(hw->nbr_h_img));
	if (!(data->pers_images.c_img))
		print_str_and_exit("the file of (collect) is null");
	data->pers_images.p_img = mlx_xpm_file_to_image(data->mlx_ptr,
			"./textures/Player.xpm", &(hw->nbr_w_img), &(hw->nbr_h_img));
	if (!(data->pers_images.p_img))
		print_str_and_exit("the file of (player) is null");
	data->pers_images.e_img = mlx_xpm_file_to_image(data->mlx_ptr,
			"./textures/Exit.xpm", &(hw->nbr_w_img), &(hw->nbr_h_img));
	if (!(data->pers_images.e_img))
		print_str_and_exit("the file of (exit) is null");
}
