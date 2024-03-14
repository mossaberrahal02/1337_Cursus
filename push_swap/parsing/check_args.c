#include<stdio.h>
#include<unistd.h>
#include"../includes/push_swap.h"

char **args(int ac, char **av)
{
    int i;
    (void) ac;
    i = 1;
    char *av1 = NULL;
    char **av2 = NULL;

    // av1 = ft_strjoin(av1, "\0");
    while (av[i])
    {
        av1 = ft_strjoin(av1,av[i]);
        // free(av1);
        i++;
    }
    av2 = ft_split(av1, ' ');
    return(av2);
}

void print_str_exit_1(char *str)
{
    ft_printf("\n%s\n", str);
    exit(1);
}

void    check_args(int ac, char **av2)
{
    int i;
    int j;

    i = -1;
    if(!av2)
    {
        system("leaks push_swap");
        print_str_exit_1("av2 from check args is null --> args are null");
    }
    while (av2[++i])
    {
        j = -1;
        while (av2[i][++j])
        {
            char num = av2[i][j];
            if(!ft_isdigit(num))
            {
                system("leaks push_swap");
                print_str_exit_1("not a digit");
            }
        }
    }
    if(i < (ac - 1) || (ac - 1) == 0)
    {
        system("leaks push_swap");
        print_str_exit_1("there is a problem in the args");
    }
    ft_printf("good args");
}

int main(int ac, char **av)
{
    char **av2 = args(ac, av);
    check_args(ac, av2);

    return 0;
}