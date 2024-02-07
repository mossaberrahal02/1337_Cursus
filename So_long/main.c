#include "So_long.h"

int my_func(int key, void *ptr)
{
    printf("the key pressed is  --> %d\n", key);
    return (0);
}
void	my_mlx_pixel_put(img_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}
int main(int ac, char *av[])
{
    t_var       data;
    img_data    img;
    if (ac == 1)
    {
        // initialize minilibX
        /*mlx_init*/
        data.mlx = mlx_init();
        if(!(data.mlx))
        {
            ft_printf("intialization problem in --> {mlx_init}\n");
            return (1);
        }
        
        //create a window
        /*mlx_new_window*/
        data.win = mlx_new_window(data.mlx, WIN_WIDTH, WIN_HEIGHT, "my first window");
        if(!(data.win))
        {
            ft_printf("problem during opening the window in --> {mlx_new_window}\n");
            return (1);
        }
        
        //create and initialize a new image
        img.img = mlx_new_image(data.mlx, 800, 600);
        // put the image informations in the struct
        img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
        my_mlx_pixel_put(&img, 50, 50, 0x00FF0000);
        mlx_put_image_to_window(data.mlx, data.win, img.img, 0, 0);

    //     /*mlx_string_put*/
    //     //mlx_string_put(data.mlx, data.win, 100, 200, 0x0000FF, "Hello, MinilibX!");

    //     // displays the window and keeps it open
    //     /*mlx_key_hook*/
    //     mlx_key_hook(data.win, my_func, 0);

    //     system("leaks solong");
    //     /*mlx_loop*/
        mlx_loop(data.mlx);
    }
    return (0);
}
