/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** my_asin
*/

#include "mymath.h"

double my_asin(double x)
{
    double asinx = 0;
    int precision = 7;
    int n = 0;
    
    while (n < precision) {
        if (2 * n <= 12) {
            asinx += my_pow(x, 2 * n + 1) * my_fac(2 * n) / \
            (my_pow(4, n) * my_pow(my_fac(n), 2) * (2 * n + 1));
        }
        ++n;
    }
    return (asinx);
}