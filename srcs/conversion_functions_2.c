/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_functions_2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:12:07 by vbaron            #+#    #+#             */
/*   Updated: 2020/06/13 15:05:19 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void    conv_i(va_list args, t_flags *general)
{
    int i;

    i = va_arg(args, int);
    if (general->zero == 1 && general->width > 0 && general->precision == -1)
    {
        general->precision = general->width - (i < 0 ? 1 : 0);
        general->width = 0;
    }
    if (general->minus == 0)
    {
        ft_printwidth_diu(general, i);
        ft_printnbr(i, general);
    }
    else
    {
        ft_printnbr(i, general);
        ft_printwidth_diu(general, i);
    }
}

void    conv_u(va_list args, t_flags *general)
{
    unsigned int u;

    u = va_arg(args, unsigned int);
    if (general->minus == 0)
    {
        ft_printwidth_diu(general, u);
        ft_printunbr(u, general);
    }
    else
    {
        ft_printunbr(u, general);
        ft_printwidth_diu(general, u);
    }
}

void    conv_x(va_list args, t_flags *general)
{
    unsigned int x;
    char *s;

    x = va_arg(args, unsigned int);
    s = ft_itoa_uhex(x);
    if (general->minus == 0)
    {
        ft_printwidth_pxX(general, s);
        ft_printpxX(s, general);
    }
    else
    {
        ft_printpxX(s, general);
        ft_printwidth_pxX(general, s);
    }
}

void    conv_X(va_list args, t_flags *general)
{
    unsigned int X;
    char *str;

    X = va_arg(args, unsigned int);
    str = ft_itoa_uhex(X);

    if (general->minus == 0)
    {
        ft_printwidth_pxX(general, str);
        ft_printpxX(ft_capitalize(str), general);
    }
    else
    {
        ft_printpxX(ft_capitalize(str), general);
        ft_printwidth_pxX(general, str);
    }
}