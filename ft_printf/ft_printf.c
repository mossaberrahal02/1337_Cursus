/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:25:53 by merrahal          #+#    #+#             */
/*   Updated: 2023/12/03 01:49:57 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_caller(va_list args, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		len += ft_put_adress(va_arg(args, unsigned long));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		len += ft_put_unsigned_decimal(va_arg(args, unsigned int));
	else if (c == 'x')
		len += ft_put_hexdeci_lc(va_arg(args, unsigned long));
	else if (c == 'X')
		len += ft_put_hexdeci_uc(va_arg(args, unsigned long));
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(char const *str, ...)
{
	int			i;
	static int	len;
	va_list		args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			len += ft_caller(args, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
