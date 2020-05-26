/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 17:05:19 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/26 18:35:08 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main()
{
    int res1;
    int res2;
    
    //Basic input
    /*printf("-- Basic input --\n\n");
    
    res = ft_printf("Hello world");
    printf("\n");
    printf("res: %d\n", res);*/

    //%% case
    /*printf("-- [%%] case --\n\n");
    
    res = ft_printf("%c", 'y');
    printf("\n");
    printf("res: %d\n", res);*/

    //c case
    /*printf("-- [c] case --\n\n");
    
    res = ft_printf("%c", 'y');
    printf("\n");
    printf("res: %d\n", res);*/

    //s case
    /*printf("-- [s] case --\n\n");
    
    res1 = ft_printf("Check start %s Check end", "Yo whagwan");
    printf("\n");
    printf("res: %d\n", res1);*/

    //p case
    /*printf("-- [p] case --\n\n");
    
    char *s = "c";
    
    res1 = ft_printf("ft_printf: Check start %p Check end\n\n", s);
    res2 = printf("printf: Check start %p Check end\n\n", s);
    printf("\n");
    printf("ft_printf res: %d\n", res1);
    printf("printf res: %d\n", res2);*/

    //d case
    /*printf("-- [d] case --\n\n");
    
    int s = 13452;
    
    res1 = ft_printf("ft_printf: Check start %d Check end\n\n", s);
    res2 = printf("printf: Check start %d Check end\n\n", s);
    printf("\n");
    printf("ft_printf res: %d\n", res1);
    printf("printf res: %d\n", res2);*/

    //i case
    /*printf("-- [i] case --\n\n");
    
    int s = 13452;
    
    res1 = ft_printf("ft_printf: Check start %i Check end\n\n", s);
    res2 = printf("printf: Check start %i Check end\n\n", s);
    printf("\n");
    printf("ft_printf res: %d\n", res1);
    printf("printf res: %d\n", res2);*/

    //u case
    /*printf("-- [u] case --\n\n");
    
    int s = -2;
    
    res1 = ft_printf("ft_printf: Check start %u Check end\n\n", s);
    res2 = printf("printf: Check start %u Check end\n\n", s);
    printf("\n");
    printf("ft_printf res: %d\n", res1);
    printf("printf res: %d\n", res2);*/

    //x case
    /*printf("-- [x] case --\n\n");
    
    int s = -22345;
    
    res1 = ft_printf("ft_printf: Check start %x Check end\n\n", s);
    res2 = printf("printf: Check start %x Check end\n\n", s);
    printf("\n");
    printf("ft_printf res: %d\n", res1);
    printf("printf res: %d\n", res2);*/

    //X case
    printf("-- [X] case --\n\n");
    
    int s = -22345;
    
    res1 = ft_printf("ft_printf: Check start %X Check end\n\n", s);
    res2 = printf("printf: Check start %X Check end\n\n", s);
    printf("\n");
    printf("ft_printf res: %d\n", res1);
    printf("printf res: %d\n", res2);
    return 0;
}