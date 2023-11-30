/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merrahal <merrahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:25:53 by merrahal          #+#    #+#             */
/*   Updated: 2023/11/29 22:05:04 by merrahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_caller(va_list args, char c)
{
    int len;

    len = 0;
    if (c == 'c')
        len += ft_putchar(va_arg(args, int));// <-- why int not char ?
    else if (c == 's')
        len += ft_putstr(va_arg(args, char *));// <-- done
    else if (c == 'p')
        len += ft_put_adress(va_arg(args, uintptr_t));// <-- not yet
    else if (c == 'd' || c == 'i') // there is diffrence btw %i and %d only if we use it in scanf (inputs in general)
        len += ft_putnbr(va_arg(args, int));// <-- done
    else if (c == 'u')
        len += ft_put_unsigned_decimal(va_arg(args, unsigned int));// <-- done
    else if (c == 'x')
        len += ft_put_hexdeci_lc(va_arg(args, unsigned int));// <-- done
    else if (c == 'X')
        len += ft_put_hexdeci_uc(va_arg(args, unsigned int));// <-- done
    else if (c == '%')
        len += ft_putpercent();// <-- done
    return (len);
}

//returns the number of characters printed(excluding the '\0')
int ft_printf(char const *str, ...)
{
    int i;
    static int len;
    va_list args;// fiha list dyal les arguments li dekhelna as params

    i = 0;
    len = 0;
    va_start(args, str);// args points to the first argument after str
    /*
        va_args retrieves the next argument
        in the variable argument with a specified type
    */
    while (str[i])
    {
        if(str[i] == '%' && str[i + 1] != '\0')
        {
            len += ft_caller(args, str[i + 1]);
            printf("\nstr[i + 1] ==> %c", str[i + 1]);
            i++;
        }
        else
            len += ft_putchar(str[i]);
        i++;
    }
    va_end(args);// cleans up the va_list variable
    return (len);
}
int main()
{
    int n= printf("%p", main);
    ft_printf("%p", main);
    // printf("%lu", sizeof(unsigned int));
}