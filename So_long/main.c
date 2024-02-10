/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:23:36 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/10 21:43:29 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "So_long.h"

int has_only_walls(char **arr)
{
     
}

static size_t   ft_strlen_no_new_line(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

static void path_checker(char *path)
{
    size_t i = ft_strlen(path);//maps/.ber

    if (path[i - 1] != 'r' || path[i - 2] != 'e' || path[i - 3] != 'b' || path[i - 4] != '.' || path[i - 5] == '/')
    {
        ft_printf("--path is not valid--\n");
        exit(1);
    }
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
            ft_printf("unvalid MAP here");
            exit(1);
        }
        free(line);
    }
    *nbr_h_map = height;
}

void copy_map(char *path, size_t nbr_lines)
{
    int fd = open("./maps/map1.ber", O_RDONLY);
    if(fd < 0)
    {
        ft_printf("\nma thelch l file dyal l map men l fnc copy_map()\n");
        exit(1);
    }
    char **arr = malloc((nbr_lines + 1) * sizeof(char *));
    if (!arr)
    {
        ft_printf("\nfailed allocation from copy_map()\n");
        exit(1);
    }
    char *line;
    int i = 0;
    while ((line = get_next_line(fd)))
    {
        arr[i] = ft_strdup(line);
        // arr[i] = line;
        strcpy(arr[i], line);
        i++;
        free(line);
    }
    arr[i] = NULL;
// khas n check wash l map dayrin biha l walls aka 1
    has_only_walls(arr);
    int j = 0;
    while (arr[j])
    {
        // ft_printf("\nline %d  --> %s\n", j, arr[j]);
        free(arr[j]);//hmm should i do it right now
        j++;
    }
    free(arr);//hmm should i do it right now
}

static int map_checker(char *path, t_mlx *data)
{
    path_checker(path);
    int fd = open("./maps/map1.ber", O_RDONLY);
    if(fd < 0)
    {
        ft_printf("ma thelch l file dyal l map");
        exit(1);
    }
    char *line = get_next_line(fd);
    if(!line)
    {
        ft_printf("unvalid MAP");
        exit(1);
    }
    size_t nbr_h_map;
    size_t nbr_w_map;
    nbr_w_map = ft_strlen_no_new_line(line);
    map_h_w_checkWidth(line, fd, &nbr_h_map, &nbr_w_map);
    copy_map(path, nbr_h_map);
    return (0);
}

int main(int ac, char *av[])
{
    t_mlx   data;
    t_img   img;//useles till now 
    if (ac == 2)
    {
        map_checker(av[1], &data);
    }
    else
    {
        ft_printf("many or less main arguments");
        exit(1);
    }


    // system("leaks solong");
    return (0); 
}
