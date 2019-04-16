/*
** EPITECH PROJECT, 2019
** My
** File description:
** my_memcpy
*/

#include "my.h"

void *my_memcpy(void *dest, const void *src)
{
    return (my_memncpy(dest, src, -1));
}

void *my_memncpy(void *dest, const void *src, size_t n)
{
    size_t index = 0;
    char *c_src = (char *)src;
    char *c_dest = (char *)dest;

    while ((index < n || n == (size_t)-1) && c_src != NULL && c_src[index]) {
        c_dest[index] = c_src[index];
        ++index;
    }
    c_dest[index] = 0;
    return (dest);
}