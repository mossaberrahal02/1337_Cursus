/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buttons.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 01:49:12 by hchaguer          #+#    #+#             */
/*   Updated: 2023/02/10 23:34:46 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_up(t_index *all)
{
	if (all->split[all->i - 1][all->j] == '0'
		|| all->split[all->i - 1][all->j] == 'C')
	{
		if (all->split[all->i - 1][all->j] == 'C')
			all->count--;
		mlx_put_image_to_window(all->mlx_ptr, all->win_ptr,
			all->imgs.img_0, all->j * 70, all->i * 65);
		mlx_put_image_to_window(all->mlx_ptr,
			all->win_ptr, all->imgs.img_p, all->j * 70, (all->i - 1) * 65);
		all->split[all->i - 1][all->j] = 'P';
		all->split[all->i][all->j] = '0';
		all->i--;
		ft_printf("%d\n", all->c_mv);
		all->c_mv++;
		if (all->c_mv)
		{
			mlx_put_image_to_window(all->mlx_ptr,
				all->win_ptr, all->imgs.img_1, 0, 0);
			mlx_string_put(all->mlx_ptr,
				all->win_ptr, 0, 0, 0xFFFFFF, ft_itoa(all->c_mv));
		}
	}
	else
		ft_exit(all);
}

void	move_left(t_index *all)
{
	if (all->split[all->i][all->j - 1] == '0'
		||all->split[all->i][all->j - 1] == 'C')
	{
		if (all->split[all->i][all->j - 1] == 'C')
			all->count--;
		mlx_put_image_to_window(all->mlx_ptr,
			all->win_ptr, all->imgs.img_0, all->j * 70, all->i * 65);
		mlx_put_image_to_window(all->mlx_ptr,
			all->win_ptr, all->imgs.img_p, (all->j - 1) * 70, all->i * 65);
		all->split[all->i][all->j - 1] = 'P';
		all->split[all->i][all->j] = '0';
		all->j--;
		ft_printf("%d\n", all->c_mv);
		all->c_mv++;
		if (all->c_mv)
		{
			mlx_put_image_to_window(all->mlx_ptr,
				all->win_ptr, all->imgs.img_1, 0, 0);
			mlx_string_put(all->mlx_ptr,
				all->win_ptr, 0, 0, 0xFFFFFF, ft_itoa(all->c_mv));
		}
	}
	else
		ft_exit(all);
}

void	move_right(t_index *all)
{
	if (all->split[all->i][all->j + 1] == '0'
		||all->split[all->i][all->j + 1] == 'C')
	{
		if (all->split[all->i][all->j + 1] == 'C')
			all->count--;
		mlx_put_image_to_window(all->mlx_ptr,
			all->win_ptr, all->imgs.img_0, all->j * 70, all->i * 65);
		mlx_put_image_to_window(all->mlx_ptr,
			all->win_ptr, all->imgs.img_p, (all->j + 1) * 70, all->i * 65);
		all->split[all->i][all->j + 1] = 'P';
		all->split[all->i][all->j] = '0';
		all->j++;
		ft_printf("%d\n", all->c_mv);
		all->c_mv++;
		if (all->c_mv)
		{
			mlx_put_image_to_window(all->mlx_ptr,
				all->win_ptr, all->imgs.img_1, 0, 0);
			mlx_string_put(all->mlx_ptr,
				all->win_ptr, 0, 0, 0xFFFFFF, ft_itoa(all->c_mv));
		}
	}
	else
		ft_exit(all);
}

void	move_down(t_index *all)
{
	if (all->split[all->i + 1][all->j] == '0'
		|| all->split[all->i + 1][all->j] == 'C')
	{
		if (all->split[all->i + 1][all->j] == 'C')
			all->count--;
		mlx_put_image_to_window(all->mlx_ptr,
			all->win_ptr, all->imgs.img_0, all->j * 70, all->i * 65);
		mlx_put_image_to_window(all->mlx_ptr,
			all->win_ptr, all->imgs.img_p, all->j * 70, (all->i + 1) * 65);
		all->split[all->i + 1][all->j] = 'P';
		all->split[all->i][all->j] = '0';
		all->i++;
		ft_printf("%d\n", all->c_mv);
		all->c_mv++;
		if (all->c_mv)
		{
			mlx_put_image_to_window(all->mlx_ptr,
				all->win_ptr, all->imgs.img_1, 0, 0);
			mlx_string_put(all->mlx_ptr,
				all->win_ptr, 0, 0, 0xFFFFFF, ft_itoa(all->c_mv));
		}
	}
	else
		ft_exit(all);
}
