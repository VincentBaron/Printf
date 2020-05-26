/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:50:33 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/26 17:29:36 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdio.h>
# include "Libft/libft.h"

typedef struct s_flags
{
    int converter;
    int zero;
    int minus;
    int precision;
    int width;
    int wildcard;
    int track;
    int bytes;
}   t_flags;

int ft_printf(char *format, ...);
void    ft_flags_check(char *format, t_flags *flags);
void   ft_flags_display(va_list args, t_flags *general);
void    conv_c(va_list args, t_flags *general);
void    conv_s(va_list args, t_flags *general);
void    conv_p(va_list args, t_flags *general);
void    conv_d(va_list args, t_flags *general);
void    conv_i(va_list args, t_flags *general);
void    conv_u(va_list args, t_flags *general);
void    conv_x(va_list args, t_flags *general);
void    conv_X(va_list args, t_flags *general);
void    ft_printchar(char c, t_flags *general);
void    ft_printstr(char *str, t_flags *general);
void    ft_printnbr(int n, t_flags *general);
void    ft_printunbr(unsigned int n, t_flags *general);

#endif