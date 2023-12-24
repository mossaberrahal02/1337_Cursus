/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learnLinkedLists.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:25:25 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/19 19:15:24 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
bghina ndiro wahed linked list fiha 1 2 3 4



[list (point de depart) ---> &first_item]  ---- [data of the 1st item AND &of seconde_item]
--- [data of 2nd item AND &of 3rd_item] ---- [...]--- []...... [nomore data AND a NULL pointer]   <--- this to end the linked list 



*/
#include<stdio.h>
#include<stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next; // this is in the bonus part in libft
} t_list;

typedef struct node
{
    int nbr;
    struct node *next;
}t_node;

int main()
{
    // point de depart
    t_node *toFirstNode = NULL; // as long as our linked list is empty we let the first item point to the NULL
    t_node *first = malloc(sizeof(t_node));//size of t_node has the size of every type the node contains
    if(!first)
        return (1);
    printf("adress dyal first 9bel ma n allokiwha mera 2 %p\n", first);
    toFirstNode = first;
    first->nbr = 1;
    first->next = NULL;
    printf("%d\n", toFirstNode->nbr);
    first = malloc(sizeof(t_node));
    if(!first)
    {
        free(first);
        return(1);
    }
    printf("adress dyal first nor ma allokinaha %p\n", first);
    t_node *second = first;
    first->nbr = 2;
    first->next = NULL;
    printf("%d\n", first->nbr);
    printf("%d\n", second->nbr);
}















