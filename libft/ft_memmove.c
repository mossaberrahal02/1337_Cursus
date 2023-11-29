/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:44:24 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/29 10:05:07 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	s = src;
	d = dest;
	if(src == dest)
		return (dest);
	if (n == 0 || (dest == NULL && src == NULL))
		return (dest);
	if (s < d && s + n > d)
	{
		s += n;
		d += n;
		while (n--)
			*(--d) = *(--s);
	}
	else
	{
		while (n--)
			*(d++) = *(s++);
	}
	return (dest);
}

// int	main(void){
//ndir lfo9 unsigned wla la ?hit f jami3 halat ma gha yesra walo f had laptop
	// char *src = NULL;
	// char *src2 = NULL;
	// char *dest = "errahal";
	// char dest1[] = "errahal";

	// printf("dyali   -->%s\n", ft_memmove(NULL, NULL, 5));
	// printf("dyalhom -->%s", memmove(src2, dest, 5));
// }