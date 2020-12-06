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

Test(errors_few_args, exit_code, .init=redirect_all_stdout)
{
    int ac = 1;
    char **av;

    error_handling(ac, av);
    cr_assert_stderr_eq_str("this program must take more arguments (try with -h)\n", "");
}

Test(errors_many_args, exit_code, .init=redirect_all_stdout)
{
    int ac = 5;
    char **av;

    error_handling(ac, av);
    cr_assert_stderr_eq_str("this program must take at most 3 arguments (try with -h)\n", "");
}

Test(error_negative_k, exit_code, .init=redirect_all_stdout)
{
    int ac = 3;
    char *av[100] = {"./106bombyx", "10", "-5"};

    error_handling(ac, av);
    cr_assert_stderr_eq_str("all arguments must be positive numbers (try with -h)\n", "");
}

Test(error_k_small, exit_code, .init=redirect_all_stdout)
{
    int ac = 3;
    char *av[100] = {"./106bombyx", "10", "0"};

    error_handling(ac, av);
    cr_assert_stderr_eq_str("the growth rate must be a number between 1 and 4 (try with -h)\n", "");
}

Test(error_k_big, exit_code, .init=redirect_all_stdout)
{
    int ac = 3;
    char *av[100] = {"./106bombyx", "10", "67"};

    error_handling(ac, av);
    cr_assert_stderr_eq_str("the growth rate must be a number between 1 and 4 (try with -h)\n", "");
}
