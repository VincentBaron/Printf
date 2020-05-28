/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_functions_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 23:44:08 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/28 15:45:55 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_printchar(char c, t_flags *general)
{
    ft_putchar_fd(c, 1);
    general->bytes++;
}

void    ft_printstr(char *str, t_flags *general)
{
    int i;

    i = 0;
    if (general->precision == -1)
        ft_putstr_fd(str, 1);
    else
    {
        while (i < general->precision && str[i])
        {
            ft_putchar_fd(str[i], 1);
            i++;
        }
    }
    general->bytes += (general->precision != -1 ? i : ft_strlen(str));
}

void    ft_printnbr(int n, t_flags *general)
{
    while (general->precision - nb_size(n) > 0)
    {
        ft_printchar('0', general);
        general->precision--;
    }
    ft_putnbr_fd(n, 1);
    general->bytes += nb_size(n);
}

void    ft_printunbr(unsigned int n, t_flags *general)
{
    while (general->precision - nb_size(n) > 0)
    {
        ft_printchar('0', general);
        general->precision--;
    }
    ft_putnbr_fd(n, 1);
    general->bytes += nb_size(n);
}

void    ft_printwidth_sp(t_flags *general, char *s)
{
  
    if (general->width < 0)
        general->width *= -1;
    while (general->width - (general->precision > 0 ? general->precision : ft_strlen(s)) > 0)
    {
        ft_printchar(' ', general);
        general->width--;
    }
}