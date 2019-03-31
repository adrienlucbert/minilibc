/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** my_floor
*/

#include "mymath.h"

double my_floor(double x)
{
    if (x < 0 && (double)((int)(x)) != x) {
        return ((double)((int)(x - 1)));
    } else {
        return ((double)((int)(x)));
    }
}