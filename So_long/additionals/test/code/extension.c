/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extension.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:21:20 by hchaguer          #+#    #+#             */
/*   Updated: 2023/02/11 01:39:42 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_exe(char *filename)
{
	if (!ft_strrchr(filename, '.'))
		return (0);
	if (ft_strncmp(ft_strrchr(filename, '.'), ".ber", 5) != 0)
		return (1);
	return (0);
}
