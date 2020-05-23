/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:43:14 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/23 20:48:47 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int   ft_flags_display(va_list args, t_flags flags, int bytes)
{
    (void)flags;
    (void)args;
    bytes++;
    return (bytes);
}

void    ft_flags_check(char *format, t_flags *flags)
{
    int i;
    
    i = 1;
    while (format[i])
    {
        if(format[i] == '0' && flags->minus == 0)
            flags->zero = 1;
        if(format[i] == '-')
            flags->minus = 1;
        if(format[i] == '.')
            flags->precision = 1;
        if(format[i] == '*')
            flags->wildcard = 1;
        i++;
    }
}

int ft_printf(char *format, ...)
{
    va_list args;
    t_flags flags;
    int bytes;
    
    va_start(args, format);
    flags.bytes = 0;
    flags.track = 0;
    while (*format)
    {
        flags.converter = '\0';
        flags.zero = 0;
        flags.minus = 0;
        flags.precision = 0;
        flags.width = 0;
        flags.wildcard = 0;
        if (*format == '%' && *(format++) != '%')
        {
            ft_flags_check(format, &flags);
            bytes = ft_flags_display(args, flags, bytes);
        }
        ft_putchar_fd(*format, 1);
        format++;
        bytes++;
    }
    return (bytes);
}