/*
** EPITECH PROJECT, 2019
** My
** File description:
** my_memcmp
*/

#include "my.h"

int my_memcmp(const void *s1, const void *s2)
{
    return (my_memncmp(s1, s2, -1));
}

int my_memncmp(const void *s1, const void *s2, size_t n)
{
    char *p1 = (char *)s1;
    char *p2 = (char *)s2;

    if (!s1 || !s2)
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