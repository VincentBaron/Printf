/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_functions_1.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:12:07 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/28 01:11:21 by vbaron           ###   ########.fr       */
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
    if (general->minus == 0)
    {
        ft_printwidth_sp(general, s);
        ft_printstr(s, general);
    }
    else
    {
        ft_printstr(s, general);
        ft_printwidth_sp(general, s);
    }
}

void    conv_p(va_list args, t_flags *general)
{
    int p;
    char *s;

    p = va_arg(args, int);
    s = ft_strjoin("0x", ft_itoa_hex(p));
    if (general->minus == 0)
    {
        ft_printwidth_sp(general, s);
        ft_printstr(s, general);
    }
    else
    {
        ft_printstr(s, general);
        ft_printwidth_sp(general, s);
    }
}

void    conv_d(va_list args, t_flags *general)
{
    int d;

    d = va_arg(args, int);
    if (general->minus == 0)
    {
        ft_printwidth_diuxX(general, d);
        ft_printnbr(d, general);
    }
    else
    {
        ft_printnbr(d, general);
        ft_printwidth_diuxX(general, d);
    }
}

void    conv_i(va_list args, t_flags *general)
{
    int i;

    i = va_arg(args, int);
    ft_printnbr(i, general);
}