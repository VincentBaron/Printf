/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_functions_1.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:12:07 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/30 21:15:43 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void    conv_per(va_list args, t_flags *general)
{
    (void)args;

    if (general->minus == 0)
    {
        ft_printwidth_sp(general, "%");
        ft_printchar('%', general);
    }
    else
    {
        ft_printchar('%', general);
        ft_printwidth_sp(general, "%");
    }
}

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
    if (s == NULL)
        s = "(null)";
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
        ft_printwidth_diu(general, d);
        ft_printnbr(d, general);
    }
    else
    {
        ft_printnbr(d, general);
        ft_printwidth_diu(general, d);
    }
}