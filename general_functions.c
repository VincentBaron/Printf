/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 23:44:08 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/26 00:02:48 by vbaron           ###   ########.fr       */
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
    ft_putstr_fd(str, 1);
    general->bytes += ft_strlen(str);
}