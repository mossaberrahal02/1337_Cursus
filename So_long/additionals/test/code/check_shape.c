/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_shape.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:56:58 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/26 13:03:07 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	len_i(char *str)
{
	char	**s;
	int		i;

	i = 0;
	s = ft_readmap(str);
	while (s[0][i])
		i++;
	return (i);
}

int	len_j(char *str)
{
	char	**s;
	int		j;

	s = ft_readmap(str);
	j = 0;
	while (s[j])
		j++;
	ft_free(s);
	return (j);
}

int	checkshape(char **line)
{
	int	i;
	int	j;

	i = 0;
	j = i++;
	while (line[i])
	{
		if (ft_strlen1(line[i]) == ft_strlen1(line[j]))
			i++;
		else
			return (1);
	}
	return (0);
}

void	path_errors(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == 'C' || str[i][j] == '0' || str[i][j] == 'P')
			{
				ft_printf("Invalide path");
				exit(1);
			}
			j++;
		}
		i++;
	}
}
