/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   So_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:01:51 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/03 15:48:41 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libs/ft_printf/ft_printf.h"
# include "../libs/get_next_line/get_next_line.h"
# include "../libs/libft/libft.h"
# include <mlx.h>
# include <stdlib.h>
# include <unistd.h>

// const values
# define HW_IMAGE 50

int			ft_printf(const char *str, ...);

typedef struct s_xy
{
	int		x;
	int		y;
}			t_xy;

typedef struct s_mc
{
	int		i;
	int		j;
	int		e;
	int		c;
	int		p;
}			t_mc;

typedef struct s_hw
{
	int		nbr_h_map;
	int		nbr_w_map;
	int		nbr_h_img;
	int		nbr_w_img;
}			t_hw;

typedef struct s_imgs
{
	void	*c_img;
	void	*p_img;
	void	*img_1;
	void	*e_img;
}			t_imgs;

typedef struct s_mlx_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	char	*path;
	char	**map;
	int		nbr_collect;
	int		nbr_moves;
	t_imgs	pers_images;
	t_xy	p_position;
}			t_mlx_data;

// utils
void		ft_freee(char **arr);
void		print_str_and_exit(const char *str);
char		**dup_map(char *path);
void		flood_fill(char **arr, int x, int y, t_hw *nbr);
void		flood_fill_e(char **arr, int x, int y, t_hw *nbr);
int			ft_strlen_no_new_line(const char *str);
int			has_only_walls(char **arr, int nbr_lines, int nbr_collumns);
int			map_checker(char *path);
void		map_content(char **arr);
void		map_h_w_checkwidth(char *line, int fd, t_hw *nbr);
void		map(char *path, t_hw *nbr);
void		path_checker(char *path);
void		player_xy(char **arr, t_xy *player);
// mlx
int			count_collect(char **map);
void		left(t_mlx_data *data);
void		right(t_mlx_data *data);
void		up(t_mlx_data *data);
void		down(t_mlx_data *data);
void		display_windows(t_mlx_data *data, char *path);
void		clear_put_window(t_mlx_data *data);
void		uldr(int keycode, t_mlx_data *data);
int			escape_udrl(int keycode, t_mlx_data *data);
int			mouse_exit(t_mlx_data *data);
void		import_images(t_mlx_data *data, t_hw *hw);
int			map_h(char **map);
int			map_w(char *line_map);
void		put_wall(t_mlx_data *data, int i, int j);
void		put_collec(t_mlx_data *data, int i, int j);
void		put_player(t_mlx_data *data, int i, int j);
void		put_exit(t_mlx_data *data, int i, int j);
void		put_images(t_mlx_data *data);

#endif
