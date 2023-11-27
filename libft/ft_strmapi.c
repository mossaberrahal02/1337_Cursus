/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:11:58 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/22 12:31:24 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*allocated;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	allocated = (char *)malloc(sizeof(char) * (len + 1));
	if (!allocated)
		return (NULL);
	while (s[i])
	{
		allocated[i] = f(i, s[i]);
		i++;
	}
	allocated[i] = '\0';
	return (allocated);
}
// char ttto_upper(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c <= 122 && c >= 97)
// 		c -= 32;
// 	return(c);
// }
// int main()
// {
// 	char * tab = ft_strmapi("mossab", ttto_upper);
// 	printf("%s\n", tab);
// }