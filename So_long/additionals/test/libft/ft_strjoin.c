/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:42:32 by hchaguer          #+#    #+#             */
/*   Updated: 2022/11/01 22:00:51 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ss1;
	char	*ss2;
	int		s1len;
	int		s2len;

	ss1 = (char *)s1;
	ss2 = (char *)s2;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = malloc((s1len + s2len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, ss1, s1len);
	ft_memcpy(str + s1len, ss2, s2len);
	str[s1len + s2len] = '\0';
	return (str);
}
