/*
** EPITECH PROJECT, 2019
** minilibc
** File description:
** my_strchr
*/

#include "my.h"

char *my_strchr(char const *s, int c)
{
    return ((char *)my_memchr(s, c));
}

char *my_strnchr(char const *s, int c, size_t n)
{
    return ((char *)my_memnchr(s, c, n));
}