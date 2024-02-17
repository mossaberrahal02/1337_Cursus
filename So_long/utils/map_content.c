/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_content.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:25:39 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/17 14:59:31 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

void	map_content(char **arr)
{
	t_mc	mc;

	ft_memset(&mc, 0, sizeof(t_mc));
	while (arr[mc.i])
	{
		mc.j = 0;
		while (arr[mc.i][mc.j] && arr[mc.i][mc.j] != '\n')
		{
			if (arr[mc.i][mc.j] == 'E')
				mc.e++;
			else if (arr[mc.i][mc.j] == 'P')
				mc.p++;
			else if (arr[mc.i][mc.j] == 'C')
				mc.c++;
			else if (arr[mc.i][mc.j] != '0' && arr[mc.i][mc.j] != '1')
				print_str_and_exit("lmap fiha chi haja zayda");
			(mc.j)++;
		}
		(mc.i)++;
	}
	if (mc.e != 1 || mc.p != 1 || mc.c < 1)
		print_str_and_exit("l map fiha chi haja zayda wla na9sa (E, P, C)");
}
