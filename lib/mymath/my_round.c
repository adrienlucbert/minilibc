/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** my_round
*/

#include "mymath.h"

double my_round(double x)
{
    double decimal = x - my_floor(x);

    if (decimal < 0.5) {
        return (my_floor(x));
    } else {
        return (my_ceil(x));
    }
    return (x);
}