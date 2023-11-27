#ifndef FT_PRINTF
#define FT_PRINTF

#include<stdio.h>
#include<stdarg.h>
#include<unistd.h>
#include<stdlib.h>

//declar the prototypes of the functions li ghadi nekhdem bihom
int     ft_printf(const char * str, ...);
int     ft_putchar(char c);
int     ft_putstr(const char *str);
int     ft_putnbr(int nb);

#endif