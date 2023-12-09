#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h> 
#include <stdlib.h>

//hna ndir BUFFER_SIZE = ??
char    *get_next_line(int fd);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strdup(const char *s1);
size_t  ft_strlen(const char *str);

#endif