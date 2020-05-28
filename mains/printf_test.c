/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 17:52:51 by vbaron            #+#    #+#             */
/*   Updated: 2020/05/28 15:42:16 by vbaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int main()
{
    //cspdiuxX%
    //-0.*

    // c converter
    printf("-- c converter --\n\n");
    
    printf("%c\n", 'h');
    /*printf("%c %*c\n", 'h', 5, 'i');
    printf("%5c\n", 'h');
    printf("%0.5c\n", 'h');
    printf("%-0.5c\n", 'h');*/

    // s converter
    printf("-- s converter --\n\n");
    
    printf("%s\n", "Hello World");
    printf("%s %*s\n", "Hello World", 5, "Hi again");
    printf("%5s\n", "Hello World");
    printf("%-20s |check offset\n", "Hello World");
    printf("%20.3s\n", "Hello World");

    // p converter
    printf("-- p converter --\n\n");

    int x = 23;
    int y = 22;
    printf("%p\n", &x);
    printf("%p %*p\n", &x, 5, &y);
    printf("%5p\n", &x);
    printf("%-20p |check offset\n", &x);
    printf("%20p\n", &x);
    //printf("%0p\n", &x);

    // d converter
    printf("-- d converter --\n\n");

    int w = 23417;
    int z = 22;
    printf("%d\n", w);
    printf("%d %*d\n", w, 5, z);
    printf("%5d\n", w);
    printf("%-20d |check offset\n", w);
    printf("%20d\n", w);
    printf("%0.3d\n", w);
    printf("%020d\n", w);

    // i converter
    printf("-- i converter --\n\n");

    int a = 23417;
    int b = 22;
    printf("%i\n", a);
    printf("%i %*i\n", a, 5, b);
    printf("%5i\n", a);
    printf("%-20i |check offset\n", a);
    printf("%20i\n", a);
    printf("%0.3i\n", a);
    printf("%020i\n", a);

      // u converter
    printf("-- u converter --\n\n");

    unsigned int m = 23417;
    unsigned int n = 22;
    printf("%u\n", m);
    printf("%u %*u\n", m, 5, n);
    printf("%5u\n", m);
    printf("%-20u |check offset\n", m);
    printf("%20u\n", m);
    printf("%0.3u\n", m);
    printf("%020u\n", m);

    // x converter
    printf("-- x converter --\n\n");

    unsigned int q = 23417;
    unsigned int r = 22;
    printf("%x\n", q);
    printf("%x %*x\n", q, 5, r);
    printf("%5x\n", q);
    printf("%-20x |check offset\n", q);
    printf("%20x\n", q);
    printf("%0.3x\n", q);
    printf("%020x\n", q);

    // X converter
    printf("-- X converter --\n\n");

    unsigned int s = 23417;
    unsigned int t = 22;
    printf("%X\n", s);
    printf("%X %*X\n", s, 5, t);
    printf("%5X\n", s);
    printf("%-20X |check offset\n", s);
    printf("%20X\n", s);
    printf("%0.3X\n", s);
    printf("%020X\n", s);

    //random tests

    printf("-- random tests --\n\n");

    printf("test: %9.6x", 2134);

    //printf("%30", 12345);

    return 0;
}