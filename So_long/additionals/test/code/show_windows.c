/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_windows.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 02:20:42 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/29 10:57:13 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_put_images(void *img, t_index *all, char c, char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			if (s[i][j] == c)
				mlx_put_image_to_window(all->mlx_ptr,
					all->win_ptr, img, j * 70, i * 65);
			j++;
		}
		i++;
	}
}

void	xpm_to_img(char *str, t_index *all)
{
	char	**s;

	s = ft_readmap(str);
	ft_put_images(all->imgs.img_0, all, '0', s);
	ft_put_images(all->imgs.img_1, all, '1', s);
	ft_put_images(all->imgs.img_p, all, 'P', s);
	ft_put_images(all->imgs.img_c, all, 'C', s);
	ft_put_images(all->imgs.img_e, all, 'E', s);
	ft_free(s);
}

void	ft_imgs(void *mlx, t_index *all, int height, int width)
{
	all->imgs.img_0 = mlx_xpm_file_to_image(mlx,
			"./textures/hallway.xpm", &width, &height);
	if (all->imgs.img_0 == NULL)
		exit(1);
	all->imgs.img_1 = mlx_xpm_file_to_image(mlx,
			"./textures/jazzback.xpm", &width, &height);
	if (all->imgs.img_1 == NULL)
		exit(1);
	all->imgs.img_c = mlx_xpm_file_to_image(mlx,
			"./textures/turtle.xpm", &width, &height);
	if (all->imgs.img_c == NULL)
		exit(1);
	all->imgs.img_e = mlx_xpm_file_to_image(mlx,
			"./textures/door.xpm", &width, &height);
	if (all->imgs.img_e == NULL)
		exit(1);
	all->imgs.img_p = mlx_xpm_file_to_image(mlx,
			"./textures/playerx.xpm", &width, &height);
	if (all->imgs.img_p == NULL)
		exit(1);
}

int	ft_move(int keycode, t_index *all)
{
	if (keycode == 53)
	{
		mlx_destroy_window(all->mlx_ptr, all->win_ptr);
		exit(0);
	}
	else if (keycode == 13 || keycode == 126)
		move_up(all);
	else if (keycode == 0 || keycode == 123)
		move_left(all);
	else if (keycode == 1 || keycode == 125)
		move_down(all);
	else if (keycode == 2 || keycode == 124)
		move_right(all);
	return (0);
}

void	show_win(char *path, t_index *all)
{
	int		width;
	int		height;
	int		i;
	int		j;

	height = 0;
	width = 0;
	j = len_j(path);
	i = len_i(path);
	all->mlx_ptr = mlx_init();
	ft_imgs(all->mlx_ptr, all, height, width);
	all->win_ptr = mlx_new_window(all->mlx_ptr, i * 70, j * 65, "So_Long");
	xpm_to_img(path, all);
	all->count = check_collectible(all->split);
	mlx_hook(all->win_ptr, 2, 0, ft_move, all);
	mlx_hook(all->win_ptr, 17, 0, (void *)exit, all);
	mlx_loop(all->mlx_ptr);
}
