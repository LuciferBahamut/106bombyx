/*
** EPITECH PROJECT, 2020
** 106bombyx
** File description:
** count butterflies
*/

#include "bombyx.h"

void generations(char **av)
{
    double n = atof(av[1]);
    int i0 = atoi(av[2]);
    int i1 = atoi(av[3]);
    double xi = 0;
    double xn = 0;
    int u = 0;

    for (double k = 1.00; k != 4; k += 0.01, u = (int) k) {
        xi = n;
        if (u == 4)
            break;
        for (int i = 1; i != i0 + 1; i++) {
            xn = k * xi * ((1000 - xi) / 1000);
            xi = xn;
        }
        for (int z = i0; z != i1 + 1; z++) {
            xn = k * xi * ((1000 - xi) / 1000);
            xi = xn;
            printf("%.2f %.2f\n", k, xn);
        }
    }
}

void growth_rate(char **av)
{
    double k = atof(av[2]);
    double xi = atof(av[1]);
    double xn = 0;
    int i = 1;

    printf("%d %.2f\n", i, xi);
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
    else
        generations(av);
}
