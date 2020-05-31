/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:43:14 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/30 21:15:29 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void   ft_flags_display(va_list args, t_flags *general)
{
    void    (*conversion[8])(va_list args, t_flags *general) = {conv_c, conv_s, conv_p, conv_d, conv_i, conv_u, conv_x, conv_X};

    conversion[general->converter](args, general);
}

void    replace_wildcard(t_flags *general, va_list args)
{
    int x;

    x = va_arg(args, int);
    if (general->precision != -1)
        general->precision = x;
    else
        general->width = x;
}

void    ft_flags_check(char *format, t_flags *general, va_list args)
{
    char *conv_index;

    conv_index = "cspdiuxX";
    general->width = ft_atoi(&format[general->track + 1]);
    if (format[general->track + 1] == '0')
        general->zero = 1;
    while (format[++general->track])
    {
        if(format[general->track] == '%')
            return;
        if(format[general->track] == '-')
        {
            general->minus = 1;
            general->zero = 0;
        }
        if(format[general->track] == '.')
        {
            general->precision = ft_atoi(&(format[general->track + 1]));
            general->zero = 0;
        }
        if(format[general->track] == '*')
            replace_wildcard(general, args);
        if ((general->converter = check_charset(format[general->track], conv_index)) != - 1)
            return;
    }
}

int ft_printf(char *format, ...)
{
    va_list args;
    t_flags general;
    
    va_start(args, format);
    general.bytes = 0;
    general.track = 0;
    while (format[general.track])
    {
        general.converter = 0;
        general.zero = 0;
        general.minus = 0;
        general.precision = -1;
        general.width = 0;
        general.wildcard = 0;
        if (format[general.track] != '%')
            ft_printchar(format[general.track], &general);
        else
        {
            ft_flags_check(format, &general, args);
            ft_flags_display(args, &general);
        }
        general.track++;
    }
    return (general.bytes);
}