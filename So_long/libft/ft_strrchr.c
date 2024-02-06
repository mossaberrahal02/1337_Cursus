/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:25:36 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/21 22:59:08 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	last;
	int	first;
	int	i;

	first = 0;
	i = 0;
	last = ft_strlen(s);
	if (*s == '\0' && (char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	if (*s == '\0')
		return (NULL);
	if ((char)c != '\0')
	{
		while (i <= last)
		{
			if (s[last - i] == (char)c)
				return ((char *)&s[last - i]);
			i++;
		}
	}
	else
		return ((char *)&s[ft_strlen(s)]);
	return (NULL);
}

/*int	main(void)
{
	char str[50] = "";
	printf("dyali --->%s\n", ft_strrchr(str, 1024)); 1024 010000000000000000
	printf("dyalhom --->%s\n", strrchr(str, 'a'));
}*/