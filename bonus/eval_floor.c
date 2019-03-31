/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** eval_floor
*/

#include "mymath.h"
#include <math.h>
#include <stdio.h>
#include <time.h>

void eval_floor(void)
{
    int min = -12;
    int max = 12;
    int x = min;
    float delta = 0;
    float total = 0;
    clock_t begin = clock();
    clock_t end;
    double elapsed = 0;

    while (x < max) {
        delta += fabs(floor(x) - my_floor(x));
        total += (fabs(floor(x)) + fabs(my_floor(x))) / 2;
        ++x;
    }
    end = clock();
    elapsed = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("FLOOR: [ACC] %7.3f%% [TIME] %.4f\n", delta / total * 100, elapsed);
}