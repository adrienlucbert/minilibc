/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** my_atan2
*/

#include "mymath.h"

double my_atan2(double y, double x)
{
	double r = my_sqrt(my_pow(x, 2) + my_pow(y, 2));

	if (x > 0 || y != 0)
		return (2 * my_atan(y / (r + x)));
	else if (x < 0 && y == 0)
		return (RAD(M_PI));
	else
		return (0);
}