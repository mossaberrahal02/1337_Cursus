/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 01:53:22 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/17 16:25:39 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

// int main()
// {
//     // printf("%d\n",O_RDWR);
//     read(0, buff, len);
//     ft_putstr_fd("haytham\n",2);
//     ft_putstr_fd("mosaab\n",1);
//     // int fd = open("t2.txt", O_WRONLY);
//     // printf("%d \n",fd);
//     // ft_putstr_fd("95*96", fd);
//     // close(fd);
// }