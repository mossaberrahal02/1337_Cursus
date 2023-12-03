#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

//declar the prototypes of the functions li ghadi nekhdem bihom
int		ft_printf(const char * str, ...);
int		ft_putchar(char c);
int		ft_putstr(const char *str);
int		ft_putnbr(int nb);
int		ft_put_unsigned_decimal(unsigned int n);
int		ft_put_hexdeci_lc(unsigned long nb);
int		ft_put_hexdeci_uc(unsigned long nb);
int     ft_put_adress(unsigned long adrs);
#endif
