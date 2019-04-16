/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** eval_acos
*/

#include "mymath.h"
#include <math.h>
#include <stdio.h>
#include <time.h>

void eval_acos(void)
{
    int min = 0;
    int max = DEG(1);
    int x = min;
    float delta = 0;
    float total = 0;
    clock_t begin = clock();
    clock_t end;
    double elapsed = 0;

    while (x < max) {
        delta += fabs(acos(RAD(x)) - my_acos(RAD(x)));
        total += (fabs(acos(RAD(x))) + fabs(my_acos(RAD(x)))) / 2;
        ++x;
    }
    end = clock();
    elapsed = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("ACOS : [ACC] %7.3f%% [TIME] %.4f\n", delta / total * 100, elapsed);
}