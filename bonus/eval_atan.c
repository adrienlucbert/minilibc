/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** eval_atan
*/

#include "mymath.h"
#include <math.h>
#include <stdio.h>
#include <time.h>

void eval_atan(void)
{
    int min = -DEG(1);
    int max = DEG(1);
    int x = min;
    float delta = 0;
    float total = 0;
    clock_t begin = clock();
    clock_t end;
    double elapsed = 0;

    while (x < max) {
        delta += fabs(atan(RAD(x)) - my_atan(RAD(x)));
        total += (fabs(atan(RAD(x))) + fabs(my_atan(RAD(x)))) / 2;
        ++x;
    }
    end = clock();
    elapsed = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("ATAN : [ACC] %7.3f%% [TIME] %.4f\n", delta / total * 100, elapsed);
}