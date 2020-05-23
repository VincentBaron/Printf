/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:43:14 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/23 15:43:25 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_flags_check(char *format, t_flags *flags)
{
    int i;
    
    i = 1;
    while (format[i])
    {
        if (format[i] == '%')
            flags->percent = 1;
        else if (format[i] == '0' && format[d])
            flags->minus = 1;
        else if (format[i] == '.')
            flags->cutter = 1;
        else if (format[i] == '-')
            flags->offset = 1;
        else if (format[i] == '-')
            flags->precision = 1;
        else if (format[i] == '-')
            flags->minus = 1;
        else if (format[i] == '-')
            flags->minus = 1;
    }
}

int ft_printf(char *format, ...)
{
    va_list args;
    t_flags flags;
    int bytes;
    
    va_start(args, format);
    while (*format)
    {
        flags.converter = '\0';
        flags.percent = 0;
        flags.zero = 0;
        flags.minus = 0;
        flags.dot = 0;
        flags.precision = 0;
        flags.offset = 0;
        flags.wildcard = 0;
        if (*format == '%')
            ft_flags_check(format, &flags);
            
        else
            ft_putchar_fd(*format);
        format++;
        bytes++;
    }
}