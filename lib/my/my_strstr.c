/*
** EPITECH PROJECT, 2019
** minilibc
** File description:
** my_strstr
*/

#include "my.h"

char *my_strstr(char const *haystack, char const *needle)
{
    return ((char *)my_memmem(haystack, sizeof(char), needle, sizeof(char)));
}