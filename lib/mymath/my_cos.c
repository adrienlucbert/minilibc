/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** my_cos
*/

#include "mymath.h"

double my_cos(double x)
{
    double cosx = 0;
    int precision = 7;
    int n = 0;
    
    while (n < precision) {
        if (2 * n <= 12) {
            cosx += my_pow(x, 2 * n) * my_pow(-1, n) / my_fac(2 * n);
        }
        ++n;
    }
    return (cosx);
}