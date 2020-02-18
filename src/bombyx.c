/*
** EPITECH PROJECT, 2020
** 106bombyx
** File description:
** count butterflies
*/

#include "bombyx.h"

void growth_rate(char **av)
{
    float n = atof(av[1]);
    float k = atof(av[2]);
    float xi = n;
    float xn;
    int i = 1;

    printf("%d %2.f\n", i, n);
    for (int i = 2; i != 101; i++) {
        xn = k * xi * ((1000 - xi) / 1000);
        xi = xn;
        printf("%d %.2f\n", i, xn);
    }
}

void bombyx(int ac, char **av)
{
    if (ac == 3)
        growth_rate(av);
    // else
    //    ;
}
