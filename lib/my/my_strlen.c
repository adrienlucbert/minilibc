/*
** EPITECH PROJECT, 2019
** minilibc
** File description:
** my_strlen
*/

#include "my.h"

size_t my_strlen(char const *s)
{
    return (my_memlen(s, sizeof(char)));
}