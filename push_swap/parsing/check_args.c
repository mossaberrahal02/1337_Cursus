
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
void arg_with_anti_slash_0(int ac, int  i,  char **av2)
{
    if(i < (ac - 1) || (ac - 1) == 0)
    {//in case ./push_swap "" 8 9 0 ...
        ft_freee(av2);
        write(2, "Error\n", 6);
        exit(1);
    }
}

void    args_are_digits(int ac, char **av2)
{
    int i;
    int j;

    i = -1;
    if(!av2)
    {
        //free what should be freed
        exit(0);
    }
    while (av2[++i])
    {
        j = -1;
        while (av2[i][++j])
        {
            if(!ft_isdigit(av2[i][j]))
            {
                ft_freee(av2);
                write(2, "Error\n", 6);
                exit(1);
            }
        }
    }
    arg_with_anti_slash_0(ac, i, av2);
}



void convert_args(char **av2)
{
    t_list *head;
    t_list *new;
    int i;
    int num;

    i = 0;
    head = NULL;
    while(av2[i])
    {
        num = ft_atol(av2[i], av2);// hta hadi rah ka t exit i should free();
        new = ft_lstnew(num);
        ft_lstadd_back(&head, new);
        i++;
    }
    check_duplicates(head);// dkhol free dakchi dkhol
}


void    check_args(int ac, char **av2)
{
    args_are_digits(ac, av2);
    convert_args(av2);

    ft_putstr("good args\n");
}
