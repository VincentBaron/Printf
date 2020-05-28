/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_functions_2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:12:07 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/28 16:11:40 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
    s = ft_strjoin("0x", ft_itoa_uhex(x));
    printf("s: %s\n\n", s);
    if (general->minus == 0)
    {
        ft_printwidth_xX(general, s);
        ft_printxX(s, general);
    }
    else
    {
        ft_printxX(s, general);
        ft_printwidth_xX(general, s);
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
        ft_printwidth_xX(general, str);
        ft_printxX(ft_capitalize(str), general);
    }
    else
    {
        ft_printxX(ft_capitalize(str), general);
        ft_printwidth_xX(general, str);
    }
}