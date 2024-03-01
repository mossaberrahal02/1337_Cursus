/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:24:09 by hchaguer          #+#    #+#             */
/*   Updated: 2023/02/11 01:44:29 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	checkline(char *line)
{
	if (checkempyline(line) == 1)
	{
		ft_printf("errors from check empty line!!!");
		exit(1);
	}
}

char	**ft_readmap(char *str)
{
	char	**split;
	char	*join;
	char	*line;
	int		fd;

	fd = open(str, O_RDONLY);
	join = NULL;
	line = get_next_line(fd);
	if (checkcadre1(line) != 0 || checkcadre2(fd) != 0)
		exit(1);
	close(fd);
	fd = open(str, O_RDONLY);
	free(line);
	line = get_next_line(fd);
	while (line)
	{
		join = ft_strjoin1(join, line);
		free(line);
		line = get_next_line(fd);
		if (line)
			checkline(line);
	}
	split = ft_split(join, '\n');
	free(join);
	return (split);
}

char	**ft_readmap1(t_index *all, char *str)
{
	char	**split;
	char	*join;
	char	*line;
	int		fd;

	all->str = str;
	fd = open(str, O_RDONLY);
	join = NULL;
	line = get_next_line(fd);
	while (line)
	{
		join = ft_strjoin1(join, line);
		free(line);
		line = get_next_line(fd);
	}
	last_line(join);
	split = ft_split(join, '\n');
	free(join);
	return (split);
}
