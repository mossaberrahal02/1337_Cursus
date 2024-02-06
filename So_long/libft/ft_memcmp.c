/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:01:23 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/21 10:17:57 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*p1 == *p2 && --n)
	{
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}

// int	main(void){
// 	char s1[] = "abcdefgh";
// 	char s2[] = "gbcdefgh";
// 	printf("dyali ---> %d\n", ft_memcmp(s1, s2,10)); // read only
// 	printf("dyalhom ---> %d", memcmp(s1, s2,10));
// }

// int main()
// remove and put back the keyword unsigned to justify the difrence btw ...
// {
// \200 hiya octal value dyal 128 f decimal w hna 3arfin char ka tkon bin
//-128 w 127
// \0 hiya null character its value f ascii hiya 0
// '\200' (decimal 128) is greater than '\0' (decimal 0) because in the
// unsigned range,
// larger numerical values are considered greater.

// unsigned char a = '\200';
// unsigned char b = '\0';
//     char a = '\200';  // Decimal 128
//     char b = '\0';    // Decimal 0
//     if (a > b) {
//         printf("\\200 kbira 3la \\0 mli ka ndiro unsigned char ");
//     } else {
//         printf("\\200 sghira 3la \\0 mli ka n7aydo unsigned");
//     }

//     return (0);
// }