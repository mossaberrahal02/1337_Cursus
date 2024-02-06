/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 07:53:41 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/21 14:50:05 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
-NULL represents an invalid value
-when a null value is assigned to
a pointer then this pointer is 
concidered as NULL pointer.
-when we use malloc we check 
if the pointer is pointing to
a valid memory adress or to an 
invalide memlocation so in this 
case we call it a NULL Pointer
-there is 0 for intigers and 0 to 
represent NULL even they are the 
same but they get treated diffrently 
each time and case so for exemple 
int *ptr = null; printf(%d,ptr)// 
out put is 0
size of NULL pointer is 8bytes
*/
