/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** my_sqrt
*/

#include "mymath.h"

double my_sqrt(double x)
{
    int index = 0;
    int precision = 3;
    double root = 0;
    double increment = 1000000000;

    while (increment > 1 || index < precision) {
        while (root * root <= x)
            root += increment;
        root -= increment;
        if (increment < 1)
            ++index;
        increment /= 10;
    }
    return (root);
}