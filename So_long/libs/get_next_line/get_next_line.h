/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:44:59 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/15 17:50:39 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

# if BUFFER_SIZE >= 2147483647 || BUFFER_SIZE <= 0
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen2(const char *str);
char	*ft_strjoin2(char const *s1, char const *s2);
char	*ft_strdup2(const char *s1);
int		ft_strchr2(const char *s, int c);
char	*ft_substr2(char const *s, unsigned int start, size_t len);
char	*get_next_line(int fd);

#endif