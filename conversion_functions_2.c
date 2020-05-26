/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_functions_2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:12:07 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/26 18:46:36 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    conv_u(va_list args, t_flags *general)
{
  unsigned int u;

  u = va_arg(args, unsigned int);
  ft_printunbr(u, general);  
}

void    conv_x(va_list args, t_flags *general)
{
    unsigned int x;

    x = va_arg(args, unsigned int);
    ft_printstr(ft_itoa_uhex(x), general);
}

void    conv_X(va_list args, t_flags *general)
{
    unsigned int X;
    char *str;
    int i;

    X = va_arg(args, unsigned int);
    str = ft_itoa_uhex(X);
    i = 0;
    while (str[i])
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }   
    ft_printstr(str, general);
}