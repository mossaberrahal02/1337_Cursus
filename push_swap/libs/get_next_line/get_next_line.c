/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:42:50 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/15 17:52:26 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_after_nl(char *str)
{
	size_t	i;
	char	*tmp;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (str[i] != '\0')
		i++;
	else
	{
		free(str);
		return (NULL);
	}
	tmp = ft_strdup2(str + i);
	free(str);
	return (tmp);
}

char	*get_before_nl(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\n' && str[i])
		i++;
	return (ft_substr2(str, 0, i + 1));
}

char	*ft_free(char **result, char *buffer)
{
	free(buffer);
	free(*result);
	*result = NULL;
	return (NULL);
}

char	*get_line2(int fd, char **result)
{
	char	*str;
	int		there_is_nl;
	int		read_return;

	there_is_nl = ft_strchr2(*result, '\n');
	str = malloc(BUFFER_SIZE + 1);
	while (!there_is_nl)
	{
		read_return = (read(fd, str, BUFFER_SIZE));
		if (read_return < 0)
			return (ft_free(result, str));
		str[read_return] = '\0';
		*result = ft_strjoin2(*result, str);
		if (read_return == 0 && *result[0] != '\0')
		{
			free(str);
			return (*result);
		}
		there_is_nl = ft_strchr2(*result, '\n');
		if (read_return == 0)
			return (ft_free(result, str));
	}
	free(str);
	return (*result);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0)
		return (NULL);
	str = get_line2(fd, &str);
	line = get_before_nl(str);
	str = get_after_nl(str);
	return (line);
}
