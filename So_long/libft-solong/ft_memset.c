/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:33:56 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/21 22:40:43 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int a, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = (unsigned char)a;
		i++;
	}
	return (dest);
}

// hna ka n7eto l value li kayna f a w li castinaha l
// 1 byte unsigned char  --> f bytes li castinahom l char
// w ka n itteritiw 3lihom (This part accesses the i-th 
// element of the memory pointed to by the char pointer 
//(after the typecast).
// This allows you to access or modify the !!!!!!!individual
// bytes !!!!!!in the memory.
// int main()
// {
// int arr[3] = {1,2,3};
// int i = 0;

// ft_memset(arr, 8, 1);
// ft_memset(arr+1, 8, 1);
// while(i < 3)
// {
// 	printf("%d\n", arr[i]);
// 	i++;
// }

/*print 1337*/
// int arr[1];
// ft_memset(arr, 57, 1);
// ft_memset(arr+1, 5, 1);
// printf("%d",arr[0]);
// }