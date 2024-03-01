// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   all_in_one_file.c                                  :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/02/10 21:23:36 by merrahal          #+#    #+#             */
// /*   Updated: 2024/02/16 20:01:35 by merrahal         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "So_long.h"

// static size_t   fft_strlen_no_new_line(const char *str)
// {
// 	size_t	i;
// 	i = 0;
// 	while (str[i] && str[i] != '\n')
// 		i++;
// 	return (i);
// }
// static void pprint_str_and_exit(const char *str)
// {
//     ft_printf("\n %s \n", str);
//     exit(1);
// }

// static void fflood_fill(char **arr, size_t x, size_t y, size_t nbr_lines, size_t nbr_collumns)
// {
//     if(x < 0 || y < 0 || x >= nbr_lines || y >= nbr_collumns) // check wach >= wla ghir > ????
//         return ;
//     if(arr[x][y] == '0' || arr[x][y] == 'E' || arr[x][y] == 'C' || arr[x][y] == 'P')
//     {
//         arr[x][y] = 'X';
//         fflood_fill(arr, x + 1, y, nbr_lines, nbr_collumns);
//         fflood_fill(arr, x - 1, y, nbr_lines, nbr_collumns);
//         fflood_fill(arr, x, y + 1, nbr_lines, nbr_collumns);
//         fflood_fill(arr, x, y - 1, nbr_lines, nbr_collumns);   
//     }
// }

// static int hhas_only_walls(char **arr, size_t nbr_lines, size_t nbr_collumns)
// {
//     size_t i = -1;
//     // size_t j = 0;
//     while ((++i < fft_strlen_no_new_line(arr[0])))
//         if(arr[0][i] != '1')
//             pprint_str_and_exit("first line in the map is not valid");
//     i = -1;
//     while ((++i < fft_strlen_no_new_line(arr[nbr_lines])))
//         if(arr[nbr_lines][i] != '1')
//             pprint_str_and_exit("last line in the map is not valid");
//     i = 0;
//     while(++i <= nbr_lines - 1)
//     {
//         if(arr[i][0] != '1')
//             pprint_str_and_exit("first collumn men chi line machi hiya hadik");
//         if(arr[i][nbr_collumns - 1] != '1')
//             pprint_str_and_exit("last collumn men chi line machi hiya hadik");
//     }
//     return (0);
// }

// static void ppath_checker(char *path)
// {
//     size_t i = ft_strlen(path);//maps/.ber

//     if (path[i - 1] != 'r' || path[i - 2] != 'e' || path[i - 3] != 'b' || path[i - 4] != '.' || path[i - 5] == '/')
//         pprint_str_and_exit("--path or extention is not valid--");
// }
// static void mmap_h_w_checkWidth(char *line, int fd, size_t *nbr_h_map, size_t *nbr_w_map)
// {
//     size_t height = 1;
//     free(line);
//     while ((line = get_next_line(fd)))
//     {
//         height++;
//         if(fft_strlen_no_new_line(line) != *nbr_w_map)
//         {
//             free(line);
//             pprint_str_and_exit("unvalid MAP");
//         }
//         free(line);
//     }
//     *nbr_h_map = height;
// }

// static void mmap_content(char **arr)
// {
//     t_mc mc;

//     ft_memset(&mc, 0, sizeof(t_mc));
//     while (arr[mc.i])
//     {
//         mc.j = 0;
//         while (arr[mc.i][mc.j] && arr[mc.i][mc.j] != '\n')
//         {
//             if (arr[mc.i][mc.j] == 'E')
//                 mc.e++;
//             else if (arr[mc.i][mc.j] == 'P')
//                 mc.p++;
//             else if (arr[mc.i][mc.j] == 'C')
//                 mc.c++;
//             else if (arr[mc.i][mc.j] != '0' && arr[mc.i][mc.j] != '1')
//                 pprint_str_and_exit("lmap fiha chi haja men ghir {0, 1, P, C, E}");
//             (mc.j)++;
//         }
//         (mc.i)++;
//     }
//     if (mc.e != 1 || mc.p != 1 || mc.c < 1)
//         pprint_str_and_exit("l map fiha chi haja zayda wla na9sa (E, P, C)");
// }

// static char **ddup_map(char *path, size_t nbr_lines)
// {
//     int i;
//     char **arr;
//     int fd;

//     i = 0;
//     fd = open(path, O_RDONLY);
//     if(fd < 0)
//         pprint_str_and_exit("ma thelch l file dyal l map men l fnc ddup_map()");
//     arr = malloc((nbr_lines + 1) * sizeof(char *));
//     if (!arr)
//         pprint_str_and_exit("failed allocation from ddup_map()");
//     i = 0;
//     while ((arr[i] = get_next_line(fd)))
//         i++;
//     arr[i] = NULL;
//     return(arr);
// }

// static void pplayer_xy(char **arr, t_xy *player)
// {
//     int i;
//     int j;

//     i = 0;
//     while (arr[i])
//     {   
//         j = 0;
//         while(arr[i][j])
//         {
//             if(arr[i][j] == 'P')
//             {
//                 player->x = i;
//                 player->y = j;
//             }
//             j++;
//         }
//         i++;
//     }
// }

// static void mmap(char *path, size_t nbr_lines, size_t nbr_collumns)
// {
//     char    **arr;
//     char    **arr2;
//     t_xy    player;
//     int i, j;

//     arr = ddup_map(path, nbr_lines);
//     arr2 = ddup_map(path, nbr_lines);
//     mmap_content(arr);
//     hhas_only_walls(arr, nbr_lines - 1, nbr_collumns);
//     pplayer_xy(arr, &player);
//     fflood_fill(arr2, player.x,  player.y, nbr_lines, nbr_collumns);

//     i = 0;
//     while (arr2[i])
//     {
//         j = 0;
//         while(arr2[i][j])
//         {
//             if(arr2[i][j] == 'C' || arr2[i][j] == 'P' || arr2[i][j] == 'E')
//                 pprint_str_and_exit("map can't b played");
//             j++;
//         }
//         i++;
//     }
// }

// static int mmap_checker(char *path)
// {
//     size_t nbr_h_map;
//     size_t nbr_w_map;
//     int fd;
//     char *line;

//     ppath_checker(path);
//     fd = open(path, O_RDONLY);
//     if(fd < 0)
//         pprint_str_and_exit("ma thelch l file dyal l map");
//     line = get_next_line(fd);
//     if(!line)
//         pprint_str_and_exit("unvalid MAP");
//     nbr_w_map = fft_strlen_no_new_line(line);
//     mmap_h_w_checkWidth(line, fd, &nbr_h_map, &nbr_w_map);
//     mmap(path, nbr_h_map, nbr_w_map);
//     return (0);
// }

// int main(int ac, char *av[])
// {
//     // t_mlx   data;
//     //t_img   img;//useles till now 
//     if (ac == 2)
//     {
//         mmap_checker(av[1]);
//         ft_printf("\nmap hiyaaa hadik\n");
//     }
//     else
//         pprint_str_and_exit("many or less main arguments");
    
//     system("leaks so_long");
//     return (0); 
// }