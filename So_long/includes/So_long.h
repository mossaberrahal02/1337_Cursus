/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   So_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:01:51 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/17 15:04:39 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libs/ft_printf/ft_printf.h"
# include "../libs/get_next_line/get_next_line.h"
# include "../libs/libft/libft.h"
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// constants values
# define WIN_WIDTH 800
# define WIN_HEIGHT 600

// used functions
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

typedef struct s_mlx
{
	void	*mlx;
	void	*win;
}			t_mlx;

typedef struct s_hw
{
	size_t	nbr_h_map;
	size_t	nbr_w_map;
}			t_hw;

// utils
void		ft_freee(char **arr);
void		print_str_and_exit(const char *str);
char		**dup_map(char *path, size_t nbr_lines);
void		flood_fill(char **arr, size_t x, size_t y, t_hw *nbr);
size_t		ft_strlen_no_new_line(const char *str);
int			has_only_walls(char **arr, size_t nbr_lines, size_t nbr_collumns);
int			map_checker(char *path);
void		map_content(char **arr);
void		map_h_w_checkwidth(char *line, int fd, t_hw *nbr);
void		map(char *path, t_hw *nbr);
void		path_checker(char *path);
void		player_xy(char **arr, t_xy *player);


#endif
