#include<stdio.h>
#include<unistd.h>
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
    av2 = ft_split(av1, ' ');
    free(av1);
    return(av2);
}

void print_str_exit_0(char *str)
{
    ft_printf("%s\n", str);
    exit(0);
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

// void convert_args(char **av2)
// {
    // int i = 0;
    
// }

void    check_args(int ac, char **av2)
{
    args_are_digits(ac, av2);
    // convert_args(av2);
    
    ft_printf("good args\n");
}

int main2(int ac, char **av)
{
    char **av2 = args(ac, av);
    check_args(ac, av2);
    free(av2);
    return 0;
}
int main(int ac, char **av)
{
    main2(ac, av);
}