/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 08:42:59 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/18 08:43:20 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/push_swap.h"


void check_duplicates(t_list *head)
{
    t_list *first = head;
    t_list *second = head->next;

    while (first)
    {
        second = first->next;
        while (second)
        {
            if(first->data == second->data)
            {
                //khas ndir hna free l linked list w free l array
                print_str_exit_1("Error");
            }
            second = second->next;
        }
        
        first = first->next;
    }
    
}