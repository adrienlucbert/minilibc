/*
** EPITECH PROJECT, 2019
** My
** File description:
** my_memlen
*/

#include "my.h"

size_t my_memlen(void const *ptr, size_t size)
{
    char *c_ptr = (char *)ptr;
    size_t len = 0;

    if (ptr == NULL)
        return (0);
    while (*c_ptr) {
        c_ptr += size;
        ++len;
    }
    return (len);
}