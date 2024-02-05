/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 00:39:13 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/05 17:43:14 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	if (size != 0 && (count > SIZE_MAX / size))
		return (NULL);
	tab = (void *)malloc(size * count);
	if (!tab)
		return (NULL);
	if (size == 0 || count == 0)
		ft_bzero(tab, 1);
	ft_bzero(tab, size * count);
	return ((void *)tab);
}
/*

	56309563 87364923 73843837
	11111111 00000000 00000000
	OR this ?
	if( (size == 0 || count > SIZE_MAX / size))
		return(NUL)
// int main()
// {
// 	char *allocated;
// 	char *allocated1;
// 	allocated = (char *) ft_calloc(0, sizeof(int));
// 	allocated1 = (char *) calloc(0, sizeof(int));
// 	allocated[0] = 1;
// 	allocated1[0] = 1;
// 	for(int i =0 ; i < 109 ; i++)
// 		printf("%d\n", allocated[i]);
// 	printf("-----------------------");
// 	for(int i =0 ; i < 109 ; i++)
// 		printf("%d\n", allocated1[i]);
// }
*/
// int main()
// {
// 	char *tab;

// 	// tab = ft_calloc(0, 0);
// 	tab = calloc(0, 0);
// 	printf("%s", tab);
// }