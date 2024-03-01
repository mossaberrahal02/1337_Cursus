/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:37:33 by hchaguer          #+#    #+#             */
/*   Updated: 2024/02/25 15:06:30 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i]) 
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	flood_fill(int i, int j, char **tmp)
{
	if (tmp[i][j] != '1' && tmp[i][j] != 'E' && tmp[i][j] != 'A')
		tmp[i][j] = 'A';
	else
		return ;
	flood_fill(i + 1, j, tmp);
	flood_fill(i, j + 1, tmp);
	flood_fill(i - 1, j, tmp);
	flood_fill(i, j - 1, tmp);
}

void	check_path(char **tmp, t_index *all)
{
	int	i;
	int	j;

	i = 0;
	while (tmp[i])
	{
		j = 0;
		while (tmp[i][j])
		{
			if (tmp[i][j] == 'P')
			{
				all->i = i;
				all->j = j;
			}
			j++;
		}
		i++;
	}
	flood_fill(all->i, all->j, tmp);
	path_errors(tmp);
	ft_free(tmp);
}
