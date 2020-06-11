/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_functions_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 23:44:08 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/30 21:15:39 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void    ft_printchar(char c, t_flags *general)
{
    ft_putchar_fd(c, 1);
    general->bytes++;
}

void    ft_printstr(char *str, t_flags *general)
{
    int i;

    i = 0;
    if (general->precision == -1 || general->precision > (int)ft_strlen(str))
    {
        ft_putstr_fd(str, 1);
        general->bytes += ft_strlen(str);
    }
    else
    {
        while (i < general->precision && str[i])
        {
            ft_printchar(str[i], general);
            i++;
        }
    }
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
    if (general->width == 0)
        return;
    if (general->converter == 0)
        general->precision = -1;
    if (general->width < 0)
        general->width *= -1;
    while (general->width - ((general->precision > 0 && general->precision < (int)ft_strlen(s)) ? general->precision : (int)ft_strlen(s)) > 0)
    {
        (general->zero == 1 ? ft_printchar('0', general) : ft_printchar(' ', general));
        general->width--;
    }
}