/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:43:14 by vbaron            #+#    #+#             */
/*   Updated: 2020/06/15 15:27:33 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void   ft_flags_display(va_list args, t_flags *general)
{
    void    (*conversion[9])(va_list args, t_flags *general) = {conv_per, conv_c, conv_s, conv_p, conv_d, conv_i, conv_u, conv_x, conv_X};

    if (general->width == 0 && general->precision == 0 && (general->converter >= 4 && general->converter <= 6))
        return ;
    conversion[general->converter](args, general);
}

void    replace_wildcard(t_flags *general, va_list args)
{
    int x;

    x = va_arg(args, int);
    if (general->minus == 0 && x < 0)
        general->minus = 1;
    if (general->precision != -1 && x >= 0)
        general->precision = x;
    if (general->precision != -1 && x < 0)
        general->precision = -1;
    else if (general->precision == -1)
    {
        general->width = x;
        if (general->width < 0)
            general->zero = 0;
    }
}

int    ft_flags_check(char *format, t_flags *general, va_list args)
{
    char *conv_index;

    conv_index = "%cspdiuxX";
    general->width = ft_atoi(&format[general->track + 1]);
    if (format[general->track + 1] == '0')
    {
        general->zero = 1;
        general->width = ft_atoi(&format[general->track + 2]);
    }
    while (format[++general->track])
    {
        if (format[general->track] == '-')
        {
            general->minus = 1;
            general->zero = 0;
        }
        if (format[general->track] == '.')
        {
            general->precision = ft_atoi(&(format[general->track + 1]));
            general->zero = 0;
        }
        if(format[general->track] == '*')
            replace_wildcard(general, args);
        if ((general->converter = check_charset(format[general->track], conv_index)) != - 1)
            return (1);
    }
    return (0);
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
        general.converter = -1;
        general.zero = 0;
        general.minus = 0;
        general.precision = -1;
        general.width = 0;
        general.wildcard = 0;
        if (format[general.track] != '%')
            ft_printchar(format[general.track], &general);
        else
        {
            if (!ft_flags_check(format, &general, args))
                return 0;
            ft_flags_display(args, &general);
        }
        general.track++;
    }
    return (general.bytes);
}