/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:50:33 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/23 20:44:59 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdio.h>
# include "Libft/libft.h"

typedef struct s_flags
{
    char converter;
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
int   ft_flags_display(va_list args, t_flags flags, int bytes);

#endif