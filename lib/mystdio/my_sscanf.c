/*
** EPITECH PROJECT, 2019
** MyStdIO
** File description:
** my_sscanf
*/

#include "my.h"
#include "mystdio.h"

static int my_scan_s(char const *format, char const **str, va_list ap)
{
    char *ptr = va_arg(ap, char *);
    char delim = format[1];

    while (**str && **str != delim) {
        *ptr = **str;
        ++ptr;
        ++*str;
    }
    *ptr = 0;
    return (1);
}

static int my_scan_di(char const *format, char const **str, va_list ap)
{
    int *ptr = va_arg(ap, int *);
    int nbr = 0;
    int sign = 1;

    while (**str && (**str == '-' || **str == '+')) {
        sign = (**str == '-' ? -sign : sign);
        ++*str;
    }
    while (**str && **str >= '0' && **str <= '9') {
        nbr *= 10;
        nbr += **str - 48;
        ++*str;
    }
    *ptr = sign * nbr;
    return (1);
}

static int my_scan_c(char const *format, char const **str, va_list ap)
{
    char *ptr = va_arg(ap, char *);

    *ptr = **str;
    ++*str;
    return (1);
}

static int my_scan(char const *format, char const **str, va_list ap)
{
    char *flags = "sdic";
    char spec = format[0];
    int index = -1;
    int (*my_scan_fns[4])(char const *, char const **, va_list ap);

    my_scan_fns[0] = my_scan_s;
    my_scan_fns[1] = my_scan_di;
    my_scan_fns[2] = my_scan_di;
    my_scan_fns[3] = my_scan_c;
    if (my_memchr("sdic", spec)) {
        index = (char *)my_memchr(flags, spec) - flags;
        return (my_scan_fns[index](format, str, ap) > 0);
    } else {
        return (0);
    }
}

int my_sscanf(const char *str, const char *format, ...)
{
    int status = 0;

    va_list ap;
    va_start(ap, format);
    while (status != -1 && *format) {
        if (*format == '%' && format[1] != '\0') {
            status += my_scan(&format[1], &str, ap);
            format += 2;
        } else if (*format == *str) {
            ++format;
            ++str;
        } else
            status = -1;
    }
    va_end(ap);
    return (status);
}