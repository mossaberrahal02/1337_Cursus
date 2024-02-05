#include "So_long.h"

int my_func(int key, void *ptr)
{
    printf("the key pressed is  --> %d\n", key);
    return (0);
}

int main()
{
    t_var   data;

    // initialize minilibX
    data.mlx = mlx_init();
    //create a window
    data.win = mlx_new_window(data.mlx, 800, 600, "my first window");

    int x,y;
    y = 50;
    x = 50;
    while(x < 300)
    {
        while (y < 600)
        {
            mlx_pixel_put(data.mlx, data.win, x, y, 0xFF6600);
            y++;
        }
        y = 50;
        x++;
    }    
    mlx_string_put(data.mlx, data.win, 100, 200, 0x0000FF, "Hello, MinilibX!");
    // displays the window and keeps it open
    mlx_key_hook(data.win, my_func, NULL);
    
    
    
    system("leaks solong");
    mlx_loop(data.mlx);
    return (0);
}
