/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:28:35 by merrahal          #+#    #+#             */
/*   Updated: 2023/12/03 01:20:20 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int len;

	len = 0;
	if (nb == -2147483648)
		len += write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb *= -1;
		len += write(1, "-", 1);
		len += ft_putnbr(nb);
	}
	else if (nb < 10)
	{
		nb = nb + '0';
		len += write(1, &nb, 1);
	}
	else
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	return (len);
}
