/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** my_atan2
*/

#include "mymath.h"
#include <math.h>
#include <stdio.h>
#include <time.h>

void eval_atan2(void)
{
    int min = -180;
    int max = 180;
    int y = min;
    float delta = 0;
    float total = 0;
    float x = max - fabs(y);
    clock_t begin = clock();
    clock_t end;
    double elapsed = 0;

    while (y < max) {
        x = max - fabs(y);
        delta += fabs(atan2(y, x) - my_atan2(y, x));
        total += (fabs(atan2(y, x)) + fabs(my_atan2(y, max - x))) / 2;
        ++y;
    }
    end = clock();
    elapsed = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("ATAN2: [ACC] %7.3f%% [TIME] %.4f\n", delta / total * 100, elapsed);
}