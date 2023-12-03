/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexdeci_uc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:53:37 by merrahal          #+#    #+#             */
/*   Updated: 2023/12/03 15:03:14 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexdeci_uc(unsigned int nb)
{
	int		len;
	char	*baselements;

	len = 0;
	baselements = "0123456789ABCDEF";
	if (nb > 15)
		len += ft_put_hexdeci_uc(nb / 16);
	len += write(1, &baselements[nb % 16], 1);
	return (len);
}
