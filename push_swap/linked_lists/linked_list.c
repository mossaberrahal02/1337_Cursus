#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node
typedef struct s_list {
    void *content;
    struct s_list* next;
}   t_list;

t_list * ft_lstnew(void *content)
{
    t_list *new = malloc(sizeof(t_list));
    new->content = content;
    new->next = NULL;
    return(new);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp = *lst;//address dyal head
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new;
}

int main()
{
    t_list  *head = NULL;
    t_list *first = ft_lstnew("first \n");
    t_list *seconde = ft_lstnew("seconde\n");
    t_list *third = ft_lstnew("third\n");
    t_list *ana = ft_lstnew("ana\n");

    ft_lstadd_front(&head, first);   //first->next = null    head = first
    // printf("head = %p &first = %p \n", head, first);
    ft_lstadd_front(&head, seconde); //second->next = first  head = seconde
    // printf("head = %p &seconde = %p \n", head, seconde);
    ft_lstadd_front(&head, third); //third->next = seconde  head = third
    // printf("head = %p third = %p \n", head, third);

    // while (head != NULL)
    // {
    //     printf("-->%s\n",head->content);
    //     head = head->next;
    // }
    // printf("-->%d\n",count);

    ft_lstadd_back(&head, ana);

    return 0;
}
