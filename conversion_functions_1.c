/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_functions_1.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:12:07 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/26 17:13:58 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    conv_c(va_list args, t_flags *general)
{
    char c;

    c = va_arg(args, int);
    ft_printchar(c, general);
}

void    conv_s(va_list args, t_flags *general)
{
    char *s;

    s = va_arg(args, char *);
    ft_printstr(s, general);
}

void    conv_p(va_list args, t_flags *general)
{
    int p;

    p = va_arg(args, int);
    ft_printstr("0x", general);
    ft_printstr(ft_itoa_hex(p), general);
}

void    conv_d(va_list args, t_flags *general)
{
    int d;

    d = va_arg(args, int);
    ft_printnbr(d, general);
}

void    conv_i(va_list args, t_flags *general)
{
    int i;

    i = va_arg(args, int);
    ft_printnbr(i, general);
}