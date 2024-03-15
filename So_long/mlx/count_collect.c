/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_collect.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:34:57 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/03 15:35:15 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

int	count_collect(char **map)
{
	t_mc	mc;

	ft_memset(&mc, 0, sizeof(t_mc));
	while (map[mc.i])
	{
		while (map[mc.i][mc.j])
		{
			if (map[mc.i][mc.j] == 'C')
				(mc.c)++;
			(mc.j)++;
		}
		mc.j = 0;
		(mc.i)++;
	}
	return (mc.c);
}
