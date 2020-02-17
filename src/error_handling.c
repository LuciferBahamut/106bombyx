/*
** EPITECH PROJECT, 2020
** 106bombyx
** File description:
** error_handling
*/

#include "bombyx.h"

int check_i(int ac, char **av)
{
    int i0 = atoi(av[2]);
    int i1 = atoi(av[3]);

    for(int i = 1; i != ac; i++)
        for (int j = 0; av[i][j] != '\0';) {
            if ((av[i][j] >= '0' && av[i][j] <= '9'))
                j++;
            else {
                write(2, STR_ERROR_NBR, strlen(STR_ERROR_NBR));
                write(2, STR_HELP, strlen(STR_HELP));
                return (ERROR);
            }
        }
    if (i0 > i1) {
        write(2, STR_ERROR_I, strlen(STR_ERROR_I));
        write(2, STR_ERROR_IBIS, strlen(STR_ERROR_IBIS));
        return (ERROR);
    }
    return (SUCCESS);
}

int check_k(int ac, char **av)
{
    double k = atof(av[2]);

    for(int i = 1; i != ac; i++)
        for (int j = 0; av[i][j] != '\0';) {
            if ((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == '.')
                j++;
            else {
                write(2, STR_ERROR_NBR, strlen(STR_ERROR_NBR));
                write(2, STR_HELP, strlen(STR_HELP));
                return (ERROR);
            }
        }
    if (k < 1 || k > 4) {
        write(2, STR_ERROR_K, strlen(STR_ERROR_K));
        write(2, STR_HELP, strlen(STR_HELP));
        return (ERROR);
    }
    return (SUCCESS);
}

int error_handling(int ac, char **av)
{
    if (ac <= 2) {
        write(2, STR_ERROR_ARG, strlen(STR_ERROR_ARG));
        write(2, STR_HELP, strlen(STR_HELP));
        return (ERROR);
    }
    if (ac > 4) {
        write(2, STR_ERROR_ARG2, strlen(STR_ERROR_ARG2));
        write(2, STR_HELP, strlen(STR_HELP));
        return (ERROR);
    }
    if (ac == 3)
        return (check_k(ac, av));
    return (check_i(ac, av));
}
