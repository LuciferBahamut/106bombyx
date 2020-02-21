/*
** EPITECH PROJECT, 2020
** 106bombyx
** File description:
** bombyx.h
*/

#ifndef __BOMBYX_H__
#define __BOMBYX_H__

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int start(int ac, char **av);
void bombyx(int ac, char **av);

int display_h(void);
int error_handling(int ac, char **av);

#define USE "./106bombyx n [k | i0 i1]\n"
#define N "number of first generation individuals\n"
#define K "growth rate from 1 to 4\n"
#define I0 "inital generation (included)\n"
#define I1 "final generation (included)\n"

#define STR_HELP " (try with -h)\n"
#define STR_ERROR_ARG "this program must take more arguments"
#define STR_ERROR_ARG2 "this program must take at most 3 arguments"
#define STR_ERROR_NBR "all arguments must be positive numbers"
#define STR_ERROR_K "the growth rate must be a number between 1 and 4"
#define STR_ERROR_I "the initial generation value cannot "
#define STR_ERROR_IBIS "be smaller than the final one (try with -h)\n"
#define STR_ERROR_FIRST "the initial generation must be at least 1"
#define STR_ERROR_N "the number of individual of the initial generation "
#define STR_ERROR_NBIS "must be a positive integer"

#define SUCCESS 0
#define ERROR 84
#define TRUE 1
#define FALSE 0

#endif
