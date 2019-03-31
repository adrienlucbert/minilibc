/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** my_pow
*/

#include "mymath.h"

double my_pow(double x, double y)
{
    if (y == 0)
        return (1);
    else if (y < 0)
        return (0);
    return (x * my_pow(x, y - 1));
}