/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 17:05:19 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/28 16:34:42 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

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
    
    res1 = ft_printf("|%20.*s|", 4, "Yo whagwan");
    printf("\n");
    res2 = printf("|%20.*s|", 4, "Yo whagwan");
    printf("\n");
    printf("res1: %d\n", res1);
    printf("res2: %d\n", res2);*/

    //p case
    /*printf("-- [p] case --\n\n");
    
    char *s = "c";
    
    res1 = ft_printf("prinft: Check start %*p Check end\n\n", 20, s);
    res2 = printf("printf: Check start %*p Check end\n\n", 20, s);
    printf("\n");
    printf("ft_printf res: %d\n", res1);
    printf("printf res: %d\n", res2);*/

    //d case
    /*printf("-- [d] case --\n\n");
    
    int s = 13452;
    
    res1 = ft_printf("prinft: Check start %-20d Check end\n\n", s);
    res2 = printf("printf: Check start %-20d Check end\n\n", s);
    printf("\n");
    printf("ft_printf res: %d\n", res1);
    printf("printf res: %d\n", res2);*/

    //i case
    /*printf("-- [i] case --\n\n");
    
    int s = 13452;
    
    res1 = ft_printf("printf: Check start %20.3i Check end\n\n", s);
    res2 = printf("printf: Check start %20.3i Check end\n\n", s);
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
    printf("-- [x] case --\n\n");
    
    int s = -22345;
    
    res1 = ft_printf("ft_printf: Check start %x Check end\n\n", s);
    res2 = printf("printf: Check start %x Check end\n\n", s);
    printf("\n");
    printf("ft_printf res: %d\n", res1);
    printf("printf res: %d\n", res2);

    //X case
    /*printf("-- [X] case --\n\n");
    
    int s = -22345;
    
    res1 = ft_printf("%X %s\n\n", s, "Hello");
    res2 = printf("printf: Check start %X str: %s Check end\n\n", s, "Hello");
    printf("\n");
    printf("ft_printf res: %d\n", res1);
    printf("printf res: %d\n", res2);*/

    //Random test
    /*printf("-- Random tests --\n\n");
    (void)res2;

    res1 = ft_printf("%20.3s", "World");*/
    return 0;
}