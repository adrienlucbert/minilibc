/*
** EPITECH PROJECT, 2019
** MyStdIO
** File description:
** my_snprintf
*/

#include "my.h"
#include "mystdio.h"

int my_vsnprintf_concat_data(char *str, size_t size, char spec, va_list ap);

int my_snprintf(char *str, size_t size, char const *format, ...)
{
    int len = 0;

    va_list ap;
    va_start(ap, format);
    len = my_vsnprintf(str, size, format, ap);
    va_end(ap);
    return (len);
}

int my_vsnprintf(char *str, size_t size, char const *format, va_list ap)
{
    int index = 0;
    int length = 0;
    char spec = 0;

    while (size - length > 0 && format[index]) {
        if (format[index] == '%' && format[index + 1] != '\0') {
            spec = format[index + 1];
            length += my_vsnprintf_concat_data(str, size - length, spec, ap);
            ++index;
        } else {
            str[length] = format[index];
            ++length;
        }
        ++index;
    }
    return (length);
}