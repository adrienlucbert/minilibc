/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** my_tan
*/

#include "mymath.h"

double my_tan(double x)
{
    return (my_cos(x) != 0 ? my_sin(x) / my_cos(x) : 0);
}