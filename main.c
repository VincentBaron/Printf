/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 17:05:19 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/23 20:39:42 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main()
{
    int res;
    
    //Basic input
    /*printf("-- Basic input --\n\n");
    
    res = ft_printf("Hello world");
    printf("\n");
    printf("res: %d\n", res);*/

    //%% case
    printf("-- [%%] case --\n\n");
    
    res = ft_printf("%%");
    printf("\n");
    printf("res: %d\n", res);
    return 0;
}