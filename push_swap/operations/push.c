/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:41:59 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/19 05:49:04 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"



static t_list *ft_lstnew(int data)
{
	t_list *new;

	new = malloc(sizeof(size_t));
	if(!new)
		return (NULL);
	new->next = NULL;
	new->data = data;
	return (new);
}

static t_list* ft_lstlast(t_list** head)
{
	t_list  *tmp;
	
	tmp = *head;
	while (tmp)
		tmp = tmp->next;
	return (tmp);
}

static void ft_lst_addack(t_list **head, t_list *new)
{
	t_list	*last;
	last = ft_lstlast(head);
	last->next = new;
}

static void  ft_lst_addfront(t_list **head, t_list *new)
{
	
}

int  main()
{
	t_list	*head_a = NULL;
	t_list	*head_b = NULL;
	t_list	*mossab = ft_lstnew(23);
	t_list	*afnane = ft_lstnew(14);
	t_list	*chaimae = ft_lstnew(26);
	t_list	*adil = ft_lstnew(32);

	
    return 0;
}