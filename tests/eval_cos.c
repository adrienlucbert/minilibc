/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** eval_cos
*/

#include "mymath.h"
#include <math.h>
#include <stdio.h>
#include <time.h>

void eval_cos(void)
{
    int min = 0;
    int max = 180;
    int x = min;
    float delta = 0;
    float total = 0;
    clock_t begin = clock();
    clock_t end;
    double elapsed = 0;

    while (x < max) {
        delta += fabs(cos(RAD(x)) - my_cos(RAD(x)));
        total += (fabs(cos(RAD(x))) + fabs(my_cos(RAD(x)))) / 2;
        ++x;
    }
    end = clock();
    elapsed = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("COS  : [ACC] %7.3f%% [TIME] %.4f\n", delta / total * 100, elapsed);
}