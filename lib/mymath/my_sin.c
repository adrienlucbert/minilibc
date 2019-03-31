/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** my_sin
*/

#include "mymath.h"

double my_sin(double x)
{
    double sinx = 0;
    int precision = 7;
    int n = 0;

    while (n < precision) {
        if (2 * n + 1 <= 12) {
            sinx += my_pow(x, 2 * n + 1) * my_pow(-1, n) / my_fac(2 * n + 1);
        }
        ++n;
    }
    return (sinx);
}