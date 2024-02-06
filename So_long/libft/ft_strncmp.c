/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:23:51 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/21 15:04:21 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && --n && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

	// thanks to unsigned char we can handle the case of 
	//`\200' is greater than `\0'
// int main()
// {
// 	char *s1 = "abcdefgh";
// 	char *s2 = "gbcdefgh";

// 	printf("dyali   --> %d\n", ft_strncmp(s1, s2, 1));
// 	printf("dyalhom --> %d", strncmp(s1, s2, 1));
// }
