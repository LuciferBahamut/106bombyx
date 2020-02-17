/*
** EPITECH PROJECT, 2020
** bombyx
** File description:
** start
*/

#include "bombyx.h"

int start(int ac, char **av)
{
    if (strcmp(av[1], "-h") == SUCCESS && ac == 2)
        display_h();
    return (SUCCESS);
}
