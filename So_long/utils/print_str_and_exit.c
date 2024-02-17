/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str_and_exit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:26:20 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/15 17:39:59 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libs/ft_printf/ft_printf.h"

void	print_str_and_exit(const char *str)
{
	ft_printf("\n %s \n", str);
	exit(1);
}
