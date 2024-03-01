/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:25:41 by hchaguer          #+#    #+#             */
/*   Updated: 2023/02/10 23:42:13 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	checkempyline(char *line)
{
	if (line[0] == '\n' || line[0] == '\0')
		return (1);
	return (0);
}

int	checkcadre1(char *line)
{
	int	i;

	i = 0;
	while (line[i] != '\n')
	{
		if (line[i] != '1')
			return (1);
		else
			i++;
	}
	return (0);
}

int	checkcadre2(int fd)
{
	char	*line;

	line = get_next_line(fd);
	while (line)
	{
		if (line[0] != '1' || line[ft_strlen(line) - 2] != '1')
			return (1);
		free(line);
		line = get_next_line(fd);
	}
	return (0);
}

int	checkcadre3(char **line)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (line[i])
		i++;
	i--;
	while (line[i][j])
	{
		if (line[i][j] != '1' )
			return (1);
		j++;
	}
	return (0);
}

int	check_player_exit(char **line)
{
	int	i;
	int	j;
	int	p_counter;
	int	e_counter;

	i = 0;
	p_counter = 0;
	e_counter = 0;
	while (line[i])
	{
		j = 0;
		while (line[i][j])
		{
			if (line[i][j] == 'P')
				p_counter++;
			if (line[i][j] == 'E')
				e_counter++;
			j++;
		}
		i++;
	}
	if (p_counter != 1 || e_counter != 1)
		return (1);
	return (0);
}
