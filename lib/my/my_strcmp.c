/*
** EPITECH PROJECT, 2019
** minilibc
** File description:
** my_strcmp
*/

#include "my.h"

int my_strcmp(const char *s1, const char *s2)
{
    return (my_memcmp(s1, s2));
}

int my_strncmp(const char *s1, const char *s2, size_t n)
{
    return (my_memncmp(s1, s2, n));
}