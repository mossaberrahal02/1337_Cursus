/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:40:29 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/19 20:59:23 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
// int main()
// {
// 	int tab[] = {1,2,3,4,5,6,7,8};
// 	for(int i =0 ; i < 8 ; i++)
// 		printf("%d\n", tab[i]);
// 	ft_bzero(tab, -5);
// 	printf("-----------------------\n");
// 	for(int i =0 ; i < 8 ; i++)
// 		printf("%d\n", tab[i]);

// 	// int tab2[] = {1,2,3,4,5,6,7,8};
// 	// for(int i =0 ; i < 8 ; i++)
// 	// 	printf("%d\n", tab2[i]);
// 	// bzero(tab2, -5);
// 	// printf("-----------------------\n");
// 	// for(int i =0 ; i < 8 ; i++)
// 	// 	printf("%d\n", tab2[i]);
// }