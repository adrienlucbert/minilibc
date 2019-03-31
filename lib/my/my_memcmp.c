/*
** EPITECH PROJECT, 2019
** My
** File description:
** my_memcmp
*/

#include "my.h"

int my_memcmp(const void *str1, const void *str2, size_t n)
{
    char *p1 = (char *)str1;
    char *p2 = (char *)str2;

    if (!str1 || !str2)
        return (-1);
    else if (n == 0)
        return (0);
    while (*p1 && *p2 && *p1 == *p2 && ((int)n > 1 || (int)n == -1)) {
        ++p1;
        ++p2;
        n = ((int)n == -1 ? n : n - 1);
    }
    return (*p1 - *p2);
}