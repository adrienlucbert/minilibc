/*
** EPITECH PROJECT, 2019
** minilibc
** File description:
** my_strdup
*/

#include "my.h"

char *my_strdup(char const *src)
{
    return (my_memdup(src));
}

char *my_strndup(char const *src, size_t n)
{
    return (my_memndup(src, n));
}