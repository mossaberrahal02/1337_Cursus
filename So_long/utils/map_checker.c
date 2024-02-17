/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:25:30 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/16 20:28:01 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../So_long.h"

int	map_checker(char *path)
{
	t_hw	nbr;
	int		fd;
	char	*line;

	path_checker(path);
	fd = open(path, O_RDONLY);
	if (fd < 0)
		print_str_and_exit("ma thelch l file dyal l map");
	line = get_next_line(fd);
	if (!line)
		print_str_and_exit("unvalid MAP");
	nbr.nbr_w_map = ft_strlen_no_new_line(line);
	map_h_w_checkwidth(line, fd, &nbr);
	map(path, &nbr);
	return (0);
}
