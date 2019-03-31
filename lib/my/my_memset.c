/*
** EPITECH PROJECT, 2019
** My
** File description:
** my_memset
*/

#include "my.h"

void *my_memset(void *str, int c, size_t n)
{
    unsigned char *tmp = str;

    while (n > 0) {
        *tmp = (char)c;
        ++tmp;
        --n;
    }
    return (str);
}