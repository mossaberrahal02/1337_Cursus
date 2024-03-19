/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 02:05:09 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/17 20:36:43 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/push_swap.h"

void free_exit(char **av2)
{
	ft_freee(av2);
	print_str_exit_1("Error");
}

long	ft_atol(const char *str, char **av2)
{
	int     i;
	long    sign;
	long    result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (!(str[i + 1] <= '9' && str[i + 1] >= '0'))
			print_str_exit_1("Error");
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + str[i] - '0';
		if(result > INT_MAX || result < INT_MIN)
			free_exit(av2);
		i++;
	}
    if(str[i] != ' ' && str[i])
		free_exit(av2);
	return (result * sign);
}
