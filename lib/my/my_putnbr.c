/*
** EPITECH PROJECT, 2019
** My
** File description:
** my_putnbr
*/

#include "my.h"

int my_putnbr(int nb)
{
    int len = 0;

    if (nb < 0) {
        nb = -nb;
        len += my_putchar('-');
    }
    if (nb >= 10)
        len += my_putnbr(nb / 10);
    len += my_putchar(nb % 10 + 48);
    return (len);
}