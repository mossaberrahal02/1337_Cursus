#ifndef SO_LONG_H
#define SO_LONG_H

#include <stdio.h>
#include <unistd.h>
#include <mlx.h>
#include <stdlib.h>
#include "ft_printf/ft_printf.h"


//constants values
#define WIN_WIDTH 800
#define WIN_HEIGHT 600

//used functions
int	ft_printf(const char *str, ...);



typedef struct  s_var
{
    void    *mlx;
    void    *win;
}               t_var;

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}   img_data;

#endif