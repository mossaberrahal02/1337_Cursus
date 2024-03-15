/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:26:07 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/17 14:59:31 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/So_long.h"

void	path_checker(char *path)
{
	size_t	i;
	int		j;

	i = ft_strlen(path);
	j = ft_strncmp((path + i) - 4, ".ber", 4);
	if (j || path[i - 5] == '/')
	{
		print_str_and_exit("--extention is not valid--");
	}
}
