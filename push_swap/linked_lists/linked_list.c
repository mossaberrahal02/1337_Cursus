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

t_list * ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    return(new);
}

int main() {

    t_list *first = ft_lstnew("first \n");
    t_list *seconde = ft_lstnew("seconde\n");
    t_list *third = ft_lstnew("third\n");
    ft_lstadd_front(&first, seconde);
    ft_lstadd_front(&seconde, third);
    printf("%s", first->content);
    printf("%s", seconde->content);
    printf("%s", third->content);
    while (first)
    {
        printf("-->%s\n",first->content);
        first = first->next;
    }
    
    return 0;
}
