/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** header
*/

#ifndef MYTH_H_
#define MYTH_H_

#include <float.h>
#include <limits.h>

#ifndef M_PI
    #define M_PI        3.14159265358979323846
#endif
#ifndef M_E
    #define M_E         2.7182818284590452354
#endif
#define RAD(deg)    ((deg) * M_PI / 180)
#define DEG(rad)    ((rad) * 180 / M_PI)

double my_pow(double x, double y);
double my_sqrt(double x);
double my_fac(double x);
double my_sin(double x);
double my_cos(double x);
double my_tan(double x);
double my_asin(double x);
double my_acos(double x);
double my_atan(double x);
double my_atan2(double y, double x);
double my_abs(double x);
double my_floor(double x);
double my_ceil(double x);
double my_round(double x);

#endif /* !MYTH_H_ */