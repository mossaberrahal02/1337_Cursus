#include"../includes/So_long.h"

// void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
// {
// 	char	*dst;

// 	dst = data->addr + (y * data->line_length + x * (data->bpp / 8));
// 	*(unsigned int*)dst = color;
// }




// int deal_key(int keycode, void *ptr)
// {
// 	printf("key code of %d\n", keycode);
// 	return (0);
// }
void load_map(t_list *data)
{
	data->door = mlx_xpm_file_to_image()
}
int main(int ac, char **av)
{
    t_mlx_data data;

	data.map = dup_map(av[1]);
    data.mlx_ptr = mlx_init();

	// /**
	//  * establish connection btw graphic system & (X Window System on Linux or macOS Window Server on macOS)
	//  * its internal details are hidden from users
	// */
    data.win_ptr = mlx_new_window(data.mlx_ptr, h * 50 , w * 50, "learn mlx");
	// mlx_key_hook(data.win_ptr, deal_key, (void *)0);
	int x = 0;
	int y = 0;
	while (x < h)
	{
		y = 0;
		while (y < w)
		{
			mlx
			if map[x][y]== 'C';
				mlx_put_image_to_window(mlx, win, data->door,)
			y++;
		}
		x++;
	}
	
    mlx_loop(data.mlx_ptr);
}
