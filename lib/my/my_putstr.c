/*
** EPITECH PROJECT, 2019
** My
** File description:
** my_putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    int len = 0;

    while (*str)
        len += my_putchar(*str++);
    return (len);
}