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
void display_h(void);

#define SUCCESS 0
#define ERROR 84

#define TRUE 1
#define FALSE 0

#define USE "./106bombyx n [k | i0 i1]\n"
#define N "number of first generation individuals\n"
#define K "growth rate from 1 to 4\n"
#define I0 "inital generation (included)\n"
#define I1 "final generation (included)\n"

#endif
