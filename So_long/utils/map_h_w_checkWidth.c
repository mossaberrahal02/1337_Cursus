/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_h_w_checkWidth.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:25:50 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/02 23:32:01 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

void	map_h_w_checkwidth(char *line, int fd, t_hw *nbr)
{
	int	height;

	height = 1;
	free(line);
	line = get_next_line(fd);
	while (line)
	{
		if (ft_strlen_no_new_line(line) != nbr->nbr_w_map)
		{
			free(line);
			print_str_and_exit("unvalid MAP");
		}
		free(line);
		line = get_next_line(fd);
		height++;
	}
	free(line);
	nbr->nbr_h_map = height;
}
