/*
** EPITECH PROJECT, 2019
** MiniLibC
** File description:
** main
*/

#include "mymath.h"
#include "my.h"
#include "mystdio.h"

int main(void)
{
    my_printf("Bonjour %s\n", "Visiteur!");
    my_dprintf(2, "Error");
    my_iob_destroy();
    return (0);
}