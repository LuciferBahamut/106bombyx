/*
** EPITECH PROJECT, 2020
** bombyx
** File description:
** unit_tests
*/

#include "bombyx.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(errors, exit_code, .init=redirect_all_stdout)
{
    int ac = 1;
    char **av;

    error_handling(ac, av);
    cr_assert_stderr_eq_str("this program must take more arguments (try with -h)\n", "");
}

Test(errors2, exit_code, .init=redirect_all_stdout)
{
    int ac = 5;
    char **av;

    error_handling(ac, av);
    cr_assert_stderr_eq_str("this program must take at most 3 arguments (try with -h)\n", "");
}


