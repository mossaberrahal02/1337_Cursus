/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:55:10 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/15 02:52:49 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*concat;

	size_t	i;
	size_t	j;
	if (!s1 && s2)
		return (ft_strdup(s2));
	else if (s1 && !s2)
		return (ft_strdup(s1));
	else if (!s1 && !s2)
		return (NULL);
	i = -1;
	j = 0;
	concat = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	if (!concat)
		return (NULL);
	while (s1[++i])
		concat[i] = s1[i];
	concat[i++] = ' ';
	while (s2[j])
		concat[i++] = s2[j++];
	concat[i] = '\0';
	free(s1);
	return (concat);
}
