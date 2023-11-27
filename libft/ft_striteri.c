/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:12:28 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/21 14:51:59 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	size_t			len;

	if (!s || !f)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}

// \0 ---> 1 byte   int var = 0 ---> 4 bytes    (void *)0 ---> 8 bytes
// void ftt_bzero(unsigned int b, char *s)
// {
//     (void)b;
//     *s = 0;
// }

// int main()
// {
//     char *str = NULL;
//     // for(int i = 0; i<= 6; i++)
//     //     printf("%c",str[i]);
//     ft_striteri(str, ftt_bzero);
//     printf("\n");
//     // for(int i = 0; i< 6; i++)
//     //     printf("%d",str[i]);
// }