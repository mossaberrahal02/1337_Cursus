
#include"../includes/push_swap.h"

char **args(int ac, char **av)
{
    int i;
    (void)ac;
    i = 1;
    char *av1 = NULL;
    char **av2 = NULL;

    while (av[i])
    {
        av1 = ft_strjoin(av1,av[i]);
        i++;
    }
    i = 0;
    av2 = ft_split(av1, ' ');
    free(av1);
    return(av2);
}

void    args_are_digits(int ac, char **av2)
{
    int i;
    int j;

    i = -1;
    if(!av2)
        print_str_exit_0("av2 from check args is null --> args are null");
    while (av2[++i])
    {
        j = -1;
        while (av2[i][++j])
        {
            if(!ft_isdigit(av2[i][j]))
            {
                free(av2);
                write(2, "Error\n", 6);
                exit(1);
            }
        }
    }
    if(i < (ac - 1) || (ac - 1) == 0)
    {
        free(av2);
        write(2, "Error\n", 6);
        exit(1);
    }
}

void convert_args(char **av2)
{
    int i = 0;
    while(av2[i])
    {
        ft_atol(av2[i]);
        i++;
    }
}



void    check_args(int ac, char **av2)
{
    args_are_digits(ac, av2);
    convert_args(av2);

    ft_putstr("good args\n");
}

