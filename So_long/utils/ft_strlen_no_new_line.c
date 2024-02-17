/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_no_new_line.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:25:13 by merrahal          #+#    #+#             */
/*   Updated: 2024/02/15 10:25:15 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../So_long.h"

size_t	ft_strlen_no_new_line(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}
