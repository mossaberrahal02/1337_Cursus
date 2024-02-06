/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:57:49 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/22 10:34:33 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
//we use " " bcs i'm including this library or header
// file that is part of my project used for local includes 
//l compiler ghadi y9eleb 3liha f current directorie 
//the in the standard system directories std
// <  > l compiler ghadi y9eleb ghir f standard system directories
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
The	atoi(void) function converts a string of
characters representing a numeral into a
number of int.
Similarly, atol() returns a long integer,
*/
// int main()
// {
// 	char *str = "-121212124545454545454545454545466464979799";
// 	printf("dyalii  --> %d\n", ft_atoi(str));
// 	printf("dyalhom --> %d", atoi(str));
// }