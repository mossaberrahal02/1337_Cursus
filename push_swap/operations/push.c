/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:41:59 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/19 05:18:54 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

void	print_stack(t_list *stack, char c);

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	
	if (!lst && !new)
		return ;
	if (!lst)
	{
    	new->next = NULL;
		*lst = new;
	}
	else
	{
		new->next = (*lst);
		*lst = new;
	}

}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}

t_list     *ft_lstnew(int data)
{
    t_list *new;
    new = malloc(sizeof(t_list));
    if (new == NULL)
    return (NULL);
    new->data = data;
    new->next = NULL;
    return (new);
}

void push(t_list **stack_from, t_list **stack_to)
{
	t_list *head = *stack_from;
	(*stack_from) = (*stack_from)->next;
	head->next =  NULL;
	
	ft_lstadd_front(stack_to, head);
}


void push_a(t_list **stack_a, t_list **stack_b)
{
	push(stack_b, stack_a);
	// write(1,"pa\n",3);
}

void push_b(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	// write(1,"pb\n",3);
}

void	print_stack(t_list *stack, char c)
{
	printf("\n===========stack %c==========\n", c);
	while (stack)
	{
		printf("\n===> (%d)<==\n", stack->data);
		stack = stack->next;
	}
	
}
int  main()
{
	t_list	*head_a = NULL;
	t_list	*head_b = NULL;
	t_list	*mossab = ft_lstnew(23);
	t_list	*afnane = ft_lstnew(14);
	t_list	*chaimae = ft_lstnew(26);
	t_list	*adil = ft_lstnew(32);
	ft_lstadd_back(&head_a, mossab);
	ft_lstadd_back(&head_a, afnane);
	ft_lstadd_back(&head_a, chaimae);
	ft_lstadd_back(&head_a, adil);
	t_list	*tmp_a = head_a;

	print_stack(head_a, 'a');
	print_stack(head_b, 'b');
	printf(RED"\n=============AFTER==========\n"RESET);

    push_b(&head_a, &head_b);
    push_b(&head_a, &head_b);

    push_b(&head_a, &head_b);
    push_b(&head_a, &head_b);

	print_stack(head_a, 'a');
	print_stack(head_b, 'b');
	
	push_a(&head_a,  &head_b);
	push_a(&head_a,  &head_b);
	push_a(&head_a,  &head_b);
	
	print_stack(head_a, 'a');
	print_stack(head_b, 'b');
	
    // push_b(&head_a, &head_b);
	// t_list	*tmp_b = head_b;
	// while(tmp_b)
	// {
	// 	printf("i'm stack b and my age is %d\n", tmp_b->data);
	// 	tmp_b = tmp_b->next;
	// }
    return 0;
}