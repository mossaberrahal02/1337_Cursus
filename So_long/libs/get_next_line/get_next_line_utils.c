/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:05:04 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/15 17:54:52 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen2(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup2(const char *s1)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = (char *)malloc(ft_strlen2(s1) * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_strjoin2(char const *s1, char const *s2)
{
	char	*concat;
	size_t	i;
	size_t	j;

	if (!s1 && s2)
		return (ft_strdup2(s2));
	else if (s1 && !s2)
		return (ft_strdup2(s1));
	else if (!s1 && !s2)
		return (NULL);
	i = 0;
	j = 0;
	concat = (char *)malloc(ft_strlen2(s1) + ft_strlen2(s2) + 1);
	if (!concat)
		return (NULL);
	while (s1[i])
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j])
		concat[i++] = s2[j++];
	concat[i] = '\0';
	free((char *)s1);
	return (concat);
}

int	ft_strchr2(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if ((char)c == s[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_substr2(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (len > ft_strlen2(s) - start)
		len = ft_strlen2(s) - start;
	if (!len || start > ft_strlen2(s))
		return (ft_strdup2(""));
	i = start;
	j = 0;
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (s[i] && len--)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}
