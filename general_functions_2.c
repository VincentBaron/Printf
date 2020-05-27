/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_functions_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 00:41:09 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/28 01:21:17 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int nb_size(int n)
{
    int size;

    size = 0;
    while (n != 0)
    {
        size++;
        n /= 10;
    }
    return (size);
}

void    ft_printwidth_diuxX(t_flags *general, int n)
{
    if (general->width < 0)
        general->width *= -1;
    while (general->width - (general->precision > nb_size(n) ? general->precision : nb_size(n)) > 0)
    {
        if (general->zero == 1)
            ft_printchar('0', general);
        else
            ft_printchar(' ', general);
        general->width--;
    }
}