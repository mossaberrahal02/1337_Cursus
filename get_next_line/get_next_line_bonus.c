/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:29:48 by merrahal          #+#    #+#             */
/*   Updated: 2023/12/14 23:03:36 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	tmp = ft_strdup(str + i);
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
	return (ft_substr(str, 0, i + 1));
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
	int		read_return ;

	there_is_nl = ft_strchr(*result, '\n');
	str = malloc(BUFFER_SIZE + 1);
	while (!there_is_nl)
	{
		read_return = (((read(fd, str, BUFFER_SIZE))));
		if (read_return < 0)
			return (ft_free(result, str));
		str[read_return] = '\0';
		*result = ft_strjoin(*result, str);
		if (read_return == 0 && *result[0] != '\0')
		{
			free(str);
			return (*result);
		}
		there_is_nl = ft_strchr(*result, '\n');
		if (read_return == 0)
			return (ft_free(result, str));
	}
	free(str);
	return (*result);
}

char	*get_next_line(int fd)
{
	static char	*str[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= INT_MAX)
		return (NULL);
	str[fd] = get_line2(fd, &str[fd]);
	line = get_before_nl(str[fd]);
	str[fd] = get_after_nl(str[fd]);
	return (line);
}
// int main()
// {
// 	int fd1 = open("test1.txt", O_CREAT | O_RDONLY);
// 	int fd2 = open("test2.txt", O_CREAT | O_RDONLY);
// 	int fd3 = open("test3.txt", O_CREAT | O_RDONLY);
// 	int fd4 = open("test4.txt", O_CREAT | O_RDONLY);
// 	int fd5 = open("test5.txt", O_CREAT | O_RDONLY);
// 	printf("\nfd1--> %s", get_next_line(fd1));
// 	printf("\nfd2--> %s", get_next_line(fd2));
// 	printf("\nfd22--> %s", get_next_line(fd2));
// 	printf("\nfd3--> %s", get_next_line(fd3));
// 	printf("\nfd4--> %s", get_next_line(fd4));
// 	printf("\nfd5--> %s", get_next_line(fd5));
// }
