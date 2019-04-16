/*
** EPITECH PROJECT, 2019
** My
** File description:
** my_memchr
*/

#include "my.h"

void *my_memchr(const void *str, int c)
{
    return (my_memnchr(str, c, -1));
}

void *my_memnchr(const void *str, int c, size_t n)
{
    char *c_s = (char *)str;
    size_t index = 0;

    while ((index < n || n == (size_t)-1) && c_s && c_s[index]) {
        if (c_s[index] == (char)c)
            return (&c_s[index]);
        ++index;
    }
    return (NULL);
}