/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** my_fac
*/

#include "mymath.h"

double my_fac(double x)
{
    if (x < 0 || x > 170)
        return (0);
    else if ((int)x == 0)
        return (1);
    else
        return ((int)x * my_fac(x - 1));
}