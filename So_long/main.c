#include <mlx.h>
#include <stdlib.h>
#include <stdio.h>

int my_func(int key, void *ptr)
{
    printf("the key pressed is  --> %d\n", key);
    return (0);
}

int main()
{
    void *mlx_ptr;
    void *win_ptr;

    // initialize minilibX
    mlx_ptr = mlx_init();
    //create a window
    win_ptr = mlx_new_window(mlx_ptr, 800, 600, "my first window");

    int x,y;
    x = y = 100;
    while(x < 300)
    {
        while (y < 300)
        {
            mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFF0000);
            y++;
        }
        y = 0;
        x++;
    }
    // displays the window and keeps it open
    mlx_key_hook(win_ptr, my_func, NULL);
    mlx_loop(mlx_ptr);
    
    
    
    //mlx_clear_window(mlx_ptr, win_ptr);
    // mlx_destroy_window(mlx_ptr, win_ptr); // it also free some thing is malloc(ed)
    return (0);
}
