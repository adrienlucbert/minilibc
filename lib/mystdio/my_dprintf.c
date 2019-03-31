/*
** EPITECH PROJECT, 2019
** MyStdIO
** File description:
** my_dprintf
*/

#include "my.h"
#include "mystdio.h"

int my_vprintf_concat(char spec, va_list ap);

int my_dprintf(int fd, char const *format, ...)
{
    int size = 0;

    va_list ap;
    va_start(ap, format);
    size = my_vdprintf(fd, format, ap);
    va_end(ap);
    return (size);
}

int my_vdprintf(int fd, const char *format, va_list ap)
{
    int index = 0;
    int size = 0;

    my_iob_init(fd);
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