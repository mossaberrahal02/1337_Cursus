/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:23:36 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/02 17:44:08 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

int	map_h(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

int	map_w(char *line_map)
{
	int	i;

	i = 0;
	while (line_map[i] && line_map[i] != '\n')
		i++;
	return (i);
}

void	import_images(t_mlx_data *data, t_hw *hw)
{
	// data->pers_images.img_0 = mlx_xpm_file_to_image(data->mlx_ptr,
			// "./textures/mazal.xpm", &(hw->nbr_w_img), &(hw->nbr_h_img));
	// if(!(data->pers_images.img_0))
	// 	print_str_and_exit("data->pers_images.img_0 is null");
	data->pers_images.img_1 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./textures/Wall.xpm", &(hw->nbr_w_img), &(hw->nbr_h_img));
	if (!(data->pers_images.img_1))
		print_str_and_exit("data->pers_images.img_1 (Wall) is null");
	data->pers_images.c_img = mlx_xpm_file_to_image(data->mlx_ptr,
			"./textures/Coin.xpm", &(hw->nbr_w_img), &(hw->nbr_h_img));
	if (!(data->pers_images.c_img))
		print_str_and_exit("data->pers_images.c_img is null");
	data->pers_images.p_img = mlx_xpm_file_to_image(data->mlx_ptr,
			"./textures/Player.xpm", &(hw->nbr_w_img), &(hw->nbr_h_img));
	if (!(data->pers_images.p_img))
		print_str_and_exit("data->pers_images.p_img is null");
	data->pers_images.e_img = mlx_xpm_file_to_image(data->mlx_ptr,
			"./textures/Exit.xpm", &(hw->nbr_w_img), &(hw->nbr_h_img));
	if (!(data->pers_images.e_img))
		print_str_and_exit("data->pers_images.e_img is null");
}

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

int	count_collect(char **map)
{
	t_mc	mc;

	ft_memset(&mc, 0, sizeof(t_mc));
	while (map[mc.i])
	{
		while (map[mc.i][mc.j])
		{
			if (map[mc.i][mc.j] == 'C')
				(mc.c)++;
			(mc.j)++;
		}
		mc.j = 0;
		(mc.i)++;
	}
	return (mc.c);
}

void	left(t_mlx_data *data)
{
	if (data->map[data->p_position.x][(data->p_position.y) - 1] == '0'
		|| data->map[data->p_position.x][(data->p_position.y) - 1] == 'C')
	{
		(data->nbr_moves)++;
		ft_printf("%d", data->nbr_moves);
		if (data->map[data->p_position.x][(data->p_position.y) - 1] == 'C')
			(data->nbr_collect)--;
		data->map[data->p_position.x][(data->p_position.y) - 1] = 'P';
		data->map[data->p_position.x][(data->p_position.y)] = '0';
		(data->p_position.y)--;
	}
	else if (data->map[data->p_position.x][(data->p_position.y) - 1] == 'E')
	{
		// should quite in clean way bcs the player arrived to the exit point
		if (!(data->nbr_collect))
		{
			ft_printf("you won\n");
			system("leaks so_long");
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
		ft_printf("%d", data->nbr_moves);
		if (data->map[data->p_position.x][(data->p_position.y) + 1] == 'C')
			(data->nbr_collect)--;
		data->map[data->p_position.x][(data->p_position.y) + 1] = 'P';
		data->map[data->p_position.x][(data->p_position.y)] = '0';
		(data->p_position.y)++;
	}
	else if (data->map[data->p_position.x][(data->p_position.y) + 1] == 'E')
	{
		// should quite in clean way bcs the player arrived to the exit point
		if (!(data->nbr_collect))
		{
			ft_printf("you won\n");
			system("leaks so_long");
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
		ft_printf("%d", data->nbr_moves);
		if (data->map[(data->p_position.x) - 1][(data->p_position.y)] == 'C')
			(data->nbr_collect)--;
		data->map[(data->p_position.x) - 1][(data->p_position.y)] = 'P';
		data->map[(data->p_position.x)][(data->p_position.y)] = '0';
		(data->p_position.x)--;
	}
	else if (data->map[(data->p_position.x) - 1][(data->p_position.y)] == 'E')
	{
		// should quite in clean way bcs the player arrived to the exit point
		if (!(data->nbr_collect))
		{
			ft_printf("you won\n");
			system("leaks so_long");
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
		ft_printf("%d", data->nbr_moves);
		if (data->map[(data->p_position.x) + 1][(data->p_position.y)] == 'C')
			(data->nbr_collect)--;
		data->map[(data->p_position.x) + 1][(data->p_position.y)] = 'P';
		data->map[(data->p_position.x)][(data->p_position.y)] = '0';
		(data->p_position.x)++;
	}
	else if (data->map[(data->p_position.x) + 1][(data->p_position.y)] == 'E')
	{
		// should quite in clean way bcs the player arrived to the exit point
		if (!(data->nbr_collect))
		{
			ft_printf("you won\n");
			system("leaks so_long");
			exit(0);
		}
	}
}

void clear_put_window(t_mlx_data *data)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	free(data->pers_images.c_img);
	free(data->pers_images.e_img);
	free(data->pers_images.img_1);
	free(data->pers_images.p_img);
	put_images(data);
}
void uldr(int keycode, t_mlx_data *data)
{
	if (keycode == 97)
	{
		left(data);
		clear_put_window(data);
	}
	else if (keycode == 100)
	{
		right(data);
		clear_put_window(data);
	}
	else if (keycode == 119)
	{
		up(data);
		clear_put_window(data);
	}
	else if (keycode == 115)
	{
		down(data);
		clear_put_window(data);
	}
}

int	escape_udrl(int keycode, t_mlx_data *data)
{
	if (keycode == 65307)
	{
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);
		ft_freee(data->map);
		free(data->pers_images.c_img);
		free(data->pers_images.e_img);
		free(data->pers_images.img_1);
		free(data->pers_images.p_img);
		exit(0);
	}
	else
		uldr(keycode, data);
	return (0);
}

int	mouse_exit(t_mlx_data *data)
{
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	ft_freee(data->map);
	free(data->pers_images.c_img);
	free(data->pers_images.e_img);
	free(data->pers_images.img_1);
	free(data->pers_images.p_img);
	exit(0);
	return (0);
}

void	display_windows(t_mlx_data *data, char *path)
{
	t_hw	hw;

	data->path = path;
	data->map = dup_map(data->path);
	hw.nbr_h_map = map_h(data->map);
	hw.nbr_w_map = map_w(data->map[0]);
	data->mlx_ptr = mlx_init();
	import_images(data, &hw);
	data->win_ptr = mlx_new_window(data->mlx_ptr, hw.nbr_w_map * 33,
			hw.nbr_h_map * 33, "So_long");
	put_images(data);
	data->nbr_collect = count_collect(data->map);
	mlx_key_hook(data->win_ptr, escape_udrl, data);
	mlx_hook(data->win_ptr, 17, 0, mouse_exit, data);
}
int	main(int ac, char *av[])
{
	t_mlx_data	data;

	ft_memset(&data, 0, sizeof(t_mlx_data));
	if (ac == 2)
	{
		map_checker(av[1]);
		ft_printf("\nmap hiyaaa hadik\n");
		display_windows(&data, av[1]);
		mlx_loop(data.mlx_ptr);
	}
	else
		print_str_and_exit("many or less main arguments");
	ft_freee(data.map);
	system("leaks so_long");
	return (0);
}
