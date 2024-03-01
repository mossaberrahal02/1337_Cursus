/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkall.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:13:37 by hchaguer          #+#    #+#             */
/*   Updated: 2023/02/11 01:38:12 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	checksplit(char **split)
{
	if (checkshape(split) == 1)
	{
		ft_printf("errors from check shap!!!");
		exit(1);
	}
	if (checkcadre3(split) == 1)
	{
		ft_printf("errors from check cadres!!!");
		exit(1);
	}
	if (check_collectible(split) < 1)
	{
		ft_printf("error in caractetres!!!");
		exit(1);
	}
	if (check_player_exit(split) == 1)
	{
		ft_printf("Should be one exit and one player!!!");
		exit(1);
	}
}
