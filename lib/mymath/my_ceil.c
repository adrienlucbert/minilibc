/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** my_ceil
*/

#include "mymath.h"

double my_ceil(double x)
{
    if (my_floor(x) == x)
        return (my_floor(x));
    else
        return (my_floor(x + 1));
}