#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h> 
#include <stdlib.h>

//hna ndir BUFFER_SIZE = ??
char    *get_next_line(int fd);
size_t  ft_strlen(const char *str);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strdup(const char *s1);
int     ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif