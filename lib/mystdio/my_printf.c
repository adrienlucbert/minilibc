/*
** EPITECH PROJECT, 2019
** MyStdIO
** File description:
** my_printf
*/

#include "my.h"
#include "mystdio.h"

int my_vprintf_concat(char spec, va_list ap);

int my_printf(const char *format, ...)
{
    int size = 0;

    va_list ap;
    va_start(ap, format);
    size = my_vprintf(format, ap);
    va_end(ap);
    return (size);
}

int my_vprintf(const char *format, va_list ap)
{
    int index = 0;
    int size = 0;

    my_iob_init(1);
    while (format[index]) {
        if (format[index] == '%' && format[index + 1] != '\0') {
            size += my_vprintf_concat(format[index + 1], ap);
            ++index;
        } else {
            my_iob_putc(format[index]);
            ++size;
        }
        ++index;
    }
    return (size);
}