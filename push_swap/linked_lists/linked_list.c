#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list *ft_lstnew(void *content)
{
    t_list *new = malloc(sizeof(t_list));
    new->content = content;
    new->next = NULL;
    return (new);
}


void ft_lstadd_frontttt(t_list **lst, t_list *new)
{
    if (!(*lst))
    {
        *lst = new;
        return ;
    }
    new->next = *lst;
    *lst = new;
}


void ft_lstadd_front(t_list **lst, t_list* new)
{
    if(!(*lst))
    {
        *lst = new;
        return ;
    }
    printf("here\n");
    (*lst)->next = new;
    *lst = new;
}

int	main(void)
{
    t_list *head = NULL;
    t_list *mossab = ft_lstnew("mossab\n");
    t_list *ayoub = ft_lstnew("ayoub\n");
    ft_lstadd_front(&head, mossab);
    ft_lstadd_front(&head, ayoub);
    while (head)
    {
        printf("--> %s  %p", head->content, head);
        head=head->next;
    }
	return (0);
}
