/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:23:36 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/14 13:46:59 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "So_long.h"

static size_t   ft_strlen_no_new_line(const char *str)
{
	size_t	i;
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}
static void print_str_and_exit(const char *str)
{
    ft_printf("\n %s \n", str);
    exit(1);
}

static int has_only_walls(char **arr, size_t nbr_lines, size_t nbr_collumns)
{
    size_t i = -1;
    // size_t j = 0;
    while ((++i < ft_strlen_no_new_line(arr[0])))//first line of the map
        if(arr[0][i] != '1')
            print_str_and_exit("first line in the map is not valid");
    i = -1;
    while ((++i < ft_strlen_no_new_line(arr[nbr_lines])))//last line of the map
        if(arr[nbr_lines][i] != '1')
            print_str_and_exit("last line in the map is not valid");
    i = 0;
    while(++i <= nbr_lines - 1)
    {
        if(arr[i][0] != '1')
            print_str_and_exit("chi line machi howa hadak");
        if(arr[i][nbr_collumns - 1] != '1')
            print_str_and_exit("chi line machi howa hadak");
    }// 2nd till before last line check wach yebda w ykemel b 1
    return (0);
}

static void path_checker(char *path)
{
    size_t i = ft_strlen(path);//maps/.ber

    if (path[i - 1] != 'r' || path[i - 2] != 'e' || path[i - 3] != 'b' || path[i - 4] != '.' || path[i - 5] == '/')
        print_str_and_exit("--path or extention is not valid--");
}
static void map_h_w_checkWidth(char *line, int fd, size_t *nbr_h_map, size_t *nbr_w_map)
{
    size_t height = 1;
    free(line);
    while ((line = get_next_line(fd)))
    {
        height++;
        if(ft_strlen_no_new_line(line) != *nbr_w_map)
        {
            free(line);
            print_str_and_exit("unvalid MAP");
        }
        free(line);
    }
    *nbr_h_map = height;
}

static void map_content(char **arr)
{
    t_mc mc;
    // mc.i = 0;
    // mc.P = 0;
    ft_memset(&mc, 0, sizeof(t_mc));
    while (arr[mc.i])
    {
        // mc.j = 0;
        while (arr[mc.i][mc.j] && arr[mc.i][mc.j] != '\n')
        {
            if (arr[mc.i][mc.j] == 'E')
                mc.E++;
            else if (arr[mc.i][mc.j] == 'P')
                mc.P++;
            else if (arr[mc.i][mc.j] == 'C')
                mc.C++;
            else if (arr[mc.i][mc.j] != '0' && arr[mc.i][mc.j] != '1')
                print_str_and_exit("lmap fiha chi haja men ghir {0, 1, P, C, E}");
            mc.j++;
        }
        mc.i++;
    }
    printf("E = %d   P = %d  C = %d\n", mc.E, mc.P, mc.C);
    if (mc.E != 1 || mc.P != 1 || mc.C < 1)
        print_str_and_exit("l map fiha chi haja zayda wla na9sa (E, P, C)");
}

static void copy_map(char *path, size_t nbr_lines, size_t nbr_collumns)
{
    int     fd;
    int     i;
    char    **arr;
    
    fd = open(path, O_RDONLY);
    if(fd < 0)
        print_str_and_exit("ma thelch l file dyal l map men l fnc copy_map()");
    arr = malloc((nbr_lines + 1) * sizeof(char *));
    if (!arr)
        print_str_and_exit("failed allocation from copy_map()");
    i = 0;
    while ((arr[i] = get_next_line(fd)))
        i++;
    arr[i] = NULL;
    map_content(arr);
    has_only_walls(arr, nbr_lines - 1, nbr_collumns);
}

static int map_checker(char *path, t_mlx *data)
{
    (void)data;
    path_checker(path);
    int fd = open(path, O_RDONLY);
    if(fd < 0)
        print_str_and_exit("ma thelch l file dyal l map");
    char *line = get_next_line(fd);
    if(!line)
        print_str_and_exit("unvalid MAP");
    size_t nbr_h_map;
    size_t nbr_w_map;
    nbr_w_map = ft_strlen_no_new_line(line);
    map_h_w_checkWidth(line, fd, &nbr_h_map, &nbr_w_map);
    copy_map(path, nbr_h_map, nbr_w_map);
    return (0);
}

int main(int ac, char *av[])
{
    t_mlx   data;
    //t_img   img;//useles till now 
    if (ac == 2)
    {
        map_checker(av[1], &data);
        ft_printf("map hiyaaa hadik ");
    }
    else
        print_str_and_exit("many or less main arguments");
    
    // system("leaks solong");
    return (0); 
}
