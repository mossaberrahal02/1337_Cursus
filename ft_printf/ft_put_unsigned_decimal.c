/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_decimal.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:12:43 by merrahal          #+#    #+#             */
/*   Updated: 2023/12/03 01:20:14 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_put_unsigned_decimal(unsigned int n)
{
    int len;
	unsigned int nb;

    len = 0;
	nb = n;
    if (nb < 10)
	{
		nb = nb + '0';
		len += write(1, &nb, 1);
	}
	else
	{
		len += ft_put_unsigned_decimal(nb / 10);
		len += ft_put_unsigned_decimal(nb % 10);
	}
	return (len);
}
