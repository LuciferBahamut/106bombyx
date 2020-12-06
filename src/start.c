/*
** EPITECH PROJECT, 2020
** bombyx
** File description:
** start
*/

#include "bombyx.h"

int start(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == SUCCESS)
        return (display_h());
    if (error_handling(ac, av) == ERROR)
        return (ERROR);
    if (atoi(av[2]) == 0) {
        write(2, STR_ERROR_FIRST, strlen(STR_ERROR_FIRST));
        write(2, STR_HELP, strlen(STR_HELP));
        return (ERROR);
    }
    bombyx(ac, av);
    return (SUCCESS);
}
