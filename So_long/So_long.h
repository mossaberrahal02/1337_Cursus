#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <unistd.h>
# include <mlx.h>
# include <stdlib.h>
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include "get_next_line/get_next_line.h"


//constants values
# define WIN_WIDTH 800
# define WIN_HEIGHT 600

//used functions
int	ft_printf(const char *str, ...);

typedef struct s_xy
{
	int x;
	int y;
}	t_xy;

typedef struct	s_mc
{
	int i;
    int j;
    int E;
    int C;
    int P;
}	t_mc;

typedef struct  s_mlx
{
    void    *mlx;
    void    *win;
}               t_mlx; // 

typedef struct	s_img {
	void	*img;
	int		*addr; //this was a char* and i think this should be int* 
	/*
	 Now the important part :
	 mlx_get_data_addr will return a char* that is 4 times the (width * height) of your image.
	 Why so ? Let me explain : This char* will represent your image, pixel by pixel,
	 and the values of this array are the colors. That's why the array is 4 times bigger :
	 you need 4 char to code the color of each pixels (one for Red, Green and Blue) and one for the alpha.
	 But... it's not very convenient, right ? So here is my little trick : you cast
	 mlx_get_data_addr as an int* and store it in an int*.
	 This way, the array will have the exact same size as your window, and each index
	 will represent one complete color of a pixel !
	*/   /*!!!!!!!!!!!       //img.addr = (int *)mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);// check the header to understand why i cast!!!!!*/
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}   t_img;

#endif