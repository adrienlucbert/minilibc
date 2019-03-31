/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** my_acos
*/

#include "mymath.h"

double my_acos(double x)
{
    return (M_PI / 2 - my_asin(x));
}