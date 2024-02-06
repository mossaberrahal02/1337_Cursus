/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 03:31:29 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/22 10:30:55 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
// dst is the max size of dest including space for nul-terminator
// dstsize- 1 for the null terminator space
// even if there is a truncated constraints we aleays return the length of src

// int	main(void)
// {
	// char d[10] = "abcd";
	// char s[] = "1234";
	// printf("%zu %s\n", ft_strlcpy(d, s, 3), d);
// 	// char *src = "abcdefghi";
// 	// char dest[14] = "pqrs";
// 	//printf("%zu\n",ft_strlcpy((void *)0 ,"hello",5));
// 	// printf("%zu\n",strlcpy((void *) 0 ,"hello",5));
// 	//printf("%s", dest1);
// }//4 123d
