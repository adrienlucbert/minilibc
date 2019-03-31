/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** eval_sqrt
*/

#include "mymath.h"
#include <math.h>
#include <stdio.h>
#include <time.h>

void eval_sqrt(void)
{
    int min = 0;
    int max = 100;
    float x = min;
    float delta = 0;
    float total = 0;
    clock_t begin = clock();
    clock_t end;
    double elapsed = 0;

    while (x < max) {
        delta += fabs(sqrt(x) - my_sqrt(x));
        total += (sqrt(x) + my_sqrt(x)) / 2;
        x += 0.1;
    }
    end = clock();
    elapsed = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("SQRT : [ACC] %7.3f%% [TIME] %.4f\n", delta / total * 100, elapsed);
}