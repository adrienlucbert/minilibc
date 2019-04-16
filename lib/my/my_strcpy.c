/*
** EPITECH PROJECT, 2019
** minilibc
** File description:
** my_strcpy
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    return ((char *)my_memcpy(dest, src));
}

char *my_strncpy(char *dest, char const *src, size_t n)
{
    return ((char *)my_memncpy(dest, src, n));
}