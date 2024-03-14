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

void ft_addfront(t_list **lst, t_list *new)
{
    if(!(*lst))
    {
        (*lst) = new;
        return ;
    }
    new->next = (*lst);
    (*lst) = new;
}

int ft_lstsize(t_list *lst)
{
    t_list *tmp = lst;
    int i = 0;
    while(tmp->next)
    {
        i++;
        tmp = tmp->next;
    }
    return i;
}

t_list* ft_lstlast(t_list *lst)
{
    t_list *tmp = lst;
    while(tmp->next)
        tmp = tmp->next;
    return (tmp);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(*lst == NULL)
    {
        *lst = new;
        return ;
    }
    t_list *tmp = *lst;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
}

/*
while(tmp)
{
    tmp = tmp->next;               <------   hadi bach t iteri 3la ga3 nodes li f liste
}
while(tmp->next)
{
    tmp = tmp->next;           <------  hadi ka tkon met2eked bli first node exists and
                                        t iteri 3la ga3 nodes exept the last one gh tkon excluded men l boucle
}
*/

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    (*del)(lst->content);
    free(lst);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    while ((*lst))
    {
        ft_lstdelone(lst, del);
        (*lst)= (*lst)->next;
    }
}
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
    {
        (*f)(lst->content);
        lst = lst->next;
    }
}

// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {

// }
int	main(void)
{
    t_list *head = NULL;
    t_list *mossab = ft_lstnew("mossab");
    t_list *afnane = ft_lstnew("afnane");
    t_list *alo = ft_lstnew("alo");
    t_list *iamlast = ft_lstnew("iamlast");
    ft_addfront(&head, mossab);
    ft_addfront(&head, afnane);
    ft_addfront(&head, alo);

    ft_lstadd_back(&head, iamlast);
    // while(head)
    // {
    //     printf("%s\n", head->content);
    //     head = head->next;
    // }
    t_list *last = ft_lstlast(head);
    printf("here the last == %s\n",last->content);
	return (0);
}
