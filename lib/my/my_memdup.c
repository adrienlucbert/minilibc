/*
** EPITECH PROJECT, 2019
** My
** File description:
** my_memdup
*/

#include "my.h"

void *my_memndup(const void *src, size_t n)
{
    int len = 0;
    void *dest = NULL;

    if (n == (size_t)-1) {
        len = my_memlen(src, sizeof(char)) + 1;
        dest = my_calloc(len, sizeof(char));
    } else {
        dest = my_calloc(n + 1, sizeof(char));
    }
    if (dest)
        my_memncpy(dest, src, n);
    return (dest);
}

void *my_memdup(const void *src)
{
    return (my_memndup(src, -1));
}