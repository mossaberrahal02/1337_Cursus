/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_only_walls.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:25:21 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/17 14:59:31 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

int	has_only_walls(char **arr, size_t nbr_lines, size_t nbr_collumns)
{
	size_t	i;

	i = -1;
	while ((++i < ft_strlen_no_new_line(arr[0])))
		if (arr[0][i] != '1')
			print_str_and_exit("first line in the map is not valid");
	i = -1;
	while ((++i < ft_strlen_no_new_line(arr[nbr_lines])))
		if (arr[nbr_lines][i] != '1')
			print_str_and_exit("last line in the map is not valid");
	i = 0;
	while (++i <= nbr_lines - 1)
	{
		if (arr[i][0] != '1')
			print_str_and_exit("first collumn men chi line machi hiya hadik");
		if (arr[i][nbr_collumns - 1] != '1')
			print_str_and_exit("last collumn men chi line machi hiya hadik");
	}
	return (0);
}
