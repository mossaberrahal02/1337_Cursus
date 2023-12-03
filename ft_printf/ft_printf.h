/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 01:51:06 by merrahal          #+#    #+#             */
/*   Updated: 2023/12/03 01:56:58 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *str);
int	ft_putnbr(int nb);
int	ft_put_unsigned_decimal(unsigned int n);
int	ft_put_hexdeci_lc(unsigned long nb);
int	ft_put_hexdeci_uc(unsigned long nb);
int	ft_put_adress(unsigned long adrs);
#endif
