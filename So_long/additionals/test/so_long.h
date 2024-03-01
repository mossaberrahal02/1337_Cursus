/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:24:00 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/25 15:03:16 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include  <stdlib.h>
# include  <unistd.h>
# include  <fcntl.h>
# include  <mlx.h>
# include  "gnl/get_next_line.h"
# include  "libft/libft.h"
# include   "ft_printf/ft_printf.h"

typedef struct s_img
{
	void	*img_c;
	void	*img_0;
	void	*img_1;
	void	*img_e;
	void	*img_p;
}	t_img;

typedef struct s_index
{
	int		i;
	int		j;
	int		i_e;
	int		j_e;
	char	**split;
	char	*str;
	int		fd;
	int		c_mv;
	int		count;
	char	*join;
	char	*line;
	void	*mlx_ptr;
	void	*win_ptr;
	t_img	imgs;
}	t_index;

void	ft_free(char **str);
char	**ft_readmap(char *str);
char	**ft_readmap1(t_index *all, char *str);
int		check_collectible(char **line);
int		checkempyline(char *line);
int		check_player_exit(char **line);
int		checkcadre1(char *line);
int		checkcadre2(int fd);
int		checkcadre3(char **line);
int		checkshape(char **line);
void	checksplit(char **split);
int		check_exe(char *filename);
int		checkposition_x(t_index *t);
void	flood_fill(int i, int j, char **tmp);
int		checkposition_y(t_index *t);
void	check_path(char **tmp, t_index *all);
void	path_errors(char **str);
void	show_win(char *str, t_index *all);
int		len_i(char *str);
int		len_j(char *str);
void	move_up(t_index *all);
void	move_left(t_index *all);
void	move_right(t_index *all);
void	move_down(t_index *all);
int		count_cols(t_index *all, char *str);
void	ft_exit(t_index *all);
void	last_line(char *join);
int		ount_mv(t_index *all);
void	check_img(t_index *all);

#endif
