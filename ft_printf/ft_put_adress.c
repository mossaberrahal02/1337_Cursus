/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_adress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:26:20 by merrahal          #+#    #+#             */
/*   Updated: 2023/12/03 17:19:09 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_hex(unsigned long nb)
{
	int		len;
	char	*baselements;

	len = 0;
	baselements = "0123456789abcdef";
	if (nb > 15)
		len += ft_put_hex(nb / 16);
	len += write(1, &baselements[nb % 16], 1);
	return (len);
}

int	ft_put_adress(unsigned long adrs)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	len += ft_put_hex(adrs);
	return (len);
}
