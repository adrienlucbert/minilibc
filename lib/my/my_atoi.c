/*
** EPITECH PROJECT, 2019
** My
** File description:
** my_atoi
*/

#include "my.h"

int my_atoi(char const *nptr)
{
    int sign = 1;
    int index = 0;
    int intmax = INT_MAX;
    int nb = 0;

    if (!nptr)
        return (0);
    while (nptr[index] == '+' || nptr[index] == '-') {
        sign = nptr[index] == '-' ? -sign : sign;
        ++index;
    }
    while (nptr[index] >= '0' && nptr[index] <= '9') {
        if (nb > intmax)
            return (0);
        nb *= 10;
        nb += nptr[index] - 48;
        ++index;
    }
    return (sign * nb);
}