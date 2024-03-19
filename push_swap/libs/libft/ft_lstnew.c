/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 08:46:52 by merrahal          #+#    #+#             */
/*   Updated: 2024/03/18 11:03:20 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
