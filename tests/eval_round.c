/*
** EPITECH PROJECT, 2019
** MyMath
** File description:
** eval_round
*/

#include "mymath.h"
#include <math.h>
#include <stdio.h>
#include <time.h>

void eval_round(void)
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
        delta += fabs(round(x) - my_round(x));
        total += (fabs(round(x)) + fabs(my_round(x))) / 2;
        ++x;
    }
    end = clock();
    elapsed = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("ROUND: [ACC] %7.3f%% [TIME] %.4f\n", delta / total * 100, elapsed);
}