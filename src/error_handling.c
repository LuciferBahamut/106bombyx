/*
** EPITECH PROJECT, 2020
** 106bombyx
** File description:
** error_handling
*/

#include "bombyx.h"

void write_error(char *str)
{
    write(2, str, strlen(str));
}

int check_i(int ac, char **av)
{
    int i0 = atoi(av[2]);
    int i1 = atoi(av[3]);

    for(int i = 2; i != ac; i++)
        for (int j = 0; av[i][j] != '\0';) {
            if ((av[i][j] >= '0' && av[i][j] <= '9'))
                j++;
            else {
                write_error(STR_ERROR_NBR);
                write_error(STR_HELP);
                return (ERROR);
            }
        }
    if (i0 > i1) {
        write_error(STR_ERROR_I);
        write_error(STR_ERROR_IBIS);
        return (ERROR);
    }
    return (SUCCESS);
}

int check_k(int ac, char **av)
{
    double k = atof(av[2]);

    for(int i = 2; i != ac; i++)
        for (int j = 0; av[i][j] != '\0';) {
            if ((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == '.')
                j++;
            else {
                write_error(STR_ERROR_NBR);
                write_error(STR_HELP);
                return (ERROR);
            }
        }
    if (k < 1 || k > 4) {
        write_error(STR_ERROR_K);
        write_error(STR_HELP);
        return (ERROR);
    }
    return (SUCCESS);
}

int check_first_arg(char *n)
{
    for (int i = 0; n[i] != '\0';) {
        if (n[i] >= '0' && n[i] <= '9')
            i++;
        else {
            write_error(STR_ERROR_N);
            write_error(STR_ERROR_NBIS);
            write_error(STR_HELP);
            return (ERROR);
        }
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
    if (check_first_arg(av[1]) == ERROR)
        return (ERROR);
    if (ac == 3)
        return (check_k(ac, av));
    return (check_i(ac, av));
}
