/*
** EPITECH PROJECT, 2019
** MyStdIO
** File description:
** my_sprintf
*/

#include "my.h"
#include "mystdio.h"

int my_vsprintf_concat_data(char *str, char spec, va_list ap);

int my_sprintf(char *str, char const *format, ...)
{
    int size = 0;

    va_list ap;
    va_start(ap, format);
    size = my_vsprintf(str, format, ap);
    va_end(ap);
    return (size);
}

int my_vsprintf(char *str, const char *format, va_list ap)
{
    int index = 0;
    int size = 0;

    while (format[index]) {
        if (format[index] == '%' && format[index + 1] != '\0') {
            size += my_vsprintf_concat_data(str, format[index + 1], ap);
            ++index;
        } else {
            str[size] = format[index];
            ++size;
        }
        ++index;
    }
    return (size);
}