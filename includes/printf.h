/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:50:33 by vbaron            #+#    #+#             */
/*   Updated: 2020/06/13 15:57:23 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdio.h>
# include <stdarg.h>
# include "../Libft/libft.h"

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
    int percent;
}   t_flags;

//ft_printf.c

int     ft_printf(char *format, ...);
int     ft_flags_check(char *format, t_flags *general, va_list args);
void    ft_flags_display(va_list args, t_flags *general);

//conversion_functions_1.c

void    conv_per(va_list args, t_flags *general);
void    conv_c(va_list args, t_flags *general);
void    conv_s(va_list args, t_flags *general);
void    conv_p(va_list args, t_flags *general);
void    conv_d(va_list args, t_flags *general);

//conversion_functions_2.c

void    conv_i(va_list args, t_flags *general);
void    conv_u(va_list args, t_flags *general);
void    conv_x(va_list args, t_flags *general);
void    conv_X(va_list args, t_flags *general);

//general_functions_1.c

void    ft_printchar(char c, t_flags *general);
void    ft_printstr(char *str, t_flags *general);
void    ft_printnbr(int n, t_flags *general);
void    ft_printunbr(unsigned int n, t_flags *general);
void    ft_printwidth_s(t_flags *general, char *s);

//general_functions_2.c

int     nb_size(int n);
void    ft_printwidth_diu(t_flags *general, int n);
void    ft_printwidth_pxX(t_flags *general, char *str);
void    ft_printpxX(char *str, t_flags *general);
char    *ft_capitalize(char *str);

//general_functions_3.c

int     x_calculator(t_flags *general, int n);
int     z_calculator(t_flags *general, char *str);

#endif