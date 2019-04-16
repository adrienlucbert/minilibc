/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** eval_sin
*/

#include "mymath.h"
#include <math.h>
#include <stdio.h>
#include <time.h>

void eval_sin(void)
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
        delta += fabs(sin(RAD(x)) - my_sin(RAD(x)));
        total += (fabs(sin(RAD(x))) + fabs(my_sin(RAD(x)))) / 2;
        ++x;
    }
    end = clock();
    elapsed = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("SIN  : [ACC] %7.3f%% [TIME] %.4f\n", delta / total * 100, elapsed);
}