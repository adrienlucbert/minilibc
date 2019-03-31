/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** my_atan
*/

#include "mymath.h"

double my_atan(double x)
{
    double atanx = x;
    int precision = 10;
    int n = 1;
    
    while (n < precision) {
        atanx += my_pow(-1, n) * my_pow(x, 2 * n + 1) / (2 * n + 1);
        ++n;
    }
    return (atanx);
}