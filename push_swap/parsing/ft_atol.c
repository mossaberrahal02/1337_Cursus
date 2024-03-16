/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 02:05:09 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/16 02:47:17 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/push_swap.h"

long	ft_atol(const char *str)
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
        {
            write(1,"Error\n",6);
            exit(1);
        }
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
    if(str[i] != ' ' && str[i])
    {
        write(1,"Error\n",6);
        exit(1);
    }
	return (result * sign);
}
