/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:50:33 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/23 15:30:42 by vbaron           ###   ########.fr       */
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
    int percent;
    int zero;
    int minus;
    int dot;
    int cutter;
    int precision;
    int offset;
    int wildcard;
}   t_flags;

int ft_printf(char *format, ...);
void    ft_flags_check(char *format, t_flags *flags);

#endif