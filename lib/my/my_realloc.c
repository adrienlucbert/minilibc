/*
** EPITECH PROJECT, 2019
** My
** File description:
** my_realloc
*/

#include "my.h"

void *my_realloc(void *ptr, size_t size)
{
    void *dest = malloc(size);

    my_memset(dest, 0, size);
    if (dest)
        my_memncpy(dest, ptr, size);
    free(ptr);
    return (dest);
}