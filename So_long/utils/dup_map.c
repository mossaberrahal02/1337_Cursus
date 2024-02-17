/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:24:41 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/17 11:21:38 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../So_long.h"

char	**dup_map(char *path, size_t nbr_lines)
{
	int		i;
	int		fd;
	char	*line;
	char	**arr;

	i = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		print_str_and_exit("ma thelch l file dyal l map men l fnc dup_map()");
	arr = malloc((nbr_lines + 1) * sizeof(char *));
	if (!arr)
		print_str_and_exit("failed allocation from dup_map()");
	i = 0;
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
