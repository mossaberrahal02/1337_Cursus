/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:24:41 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/23 18:19:15 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h" 

static int nbr_lines(char *path)
{
	int fd;
	int h;
	char *line;

	h = 1;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		print_str_and_exit("ma thelch l file dyal l map men l fnc dup_map()");
	line = get_next_line(fd);
	if(!line)
		return (0);
	while (line)
	{
		free(line);
		line = get_next_line(fd);
		h++;
	}
	free(line);
	return (h);
}

char	**dup_map(char *path)
{
	int		i;
	int		fd;
	char	*line;
	char	**arr;
	int		nbr_liness;

	i = 0;
	nbr_liness = nbr_lines(path);
	fd = open(path, O_RDONLY);
	if (fd < 0)
		print_str_and_exit("ma thelch l file dyal l map men l fnc dup_map()");
	arr = malloc((nbr_liness + 1) * sizeof(char *));
	if (!arr)
		print_str_and_exit("failed allocation from dup_map()");
	line = get_next_line(fd);
	while (line)
	{
		arr[i] = line;
		i++;
		line = get_next_line(fd);
	}
	arr[i] = NULL;
	return (arr);
}
