/*
** EPITECH PROJECT, 2019
** MyStdIO
** File description:
** my_vprintf
*/

#include "my.h"
#include "mystdio.h"

int my_vprintf_concat_s(va_list ap)
{
    char *arg = va_arg(ap, char *);
    int arg_len = 0;

    if (!arg)
        return (0);
    while (arg[arg_len])
        my_iob_putc(arg[arg_len++]);
    return (arg_len);
}

int my_vprintf_concat_di(va_list ap)
{
    int arg = va_arg(ap, int);
    int size = 1;
    int tmp = 0;

    if (arg < 0) {
        my_iob_putc('-');
        arg = -arg;
    }
    tmp = arg;
    while (tmp >= 10) {
        tmp /= 10;
        size *= 10;
    }
    tmp = size;
    while (arg >= 1) {
        my_iob_putc(arg / size + '0');
        arg -= (arg / size) * size;
        size /= 10;
    }
    return (size);
}

int my_vprintf_concat_c(va_list ap)
{
    char arg = va_arg(ap, int);
    int str_len = 0;

    if (!arg)
        return (0);
    my_iob_putc(arg);
    return (1);
}

int my_vprintf_concat(char spec, va_list ap)
{
    char *flags = "sdic";
    int index = -1;
    int (*concat_fns[4])(va_list);

    concat_fns[0] = my_vprintf_concat_s;
    concat_fns[1] = my_vprintf_concat_di;
    concat_fns[2] = my_vprintf_concat_di;
    concat_fns[3] = my_vprintf_concat_c;
    if (my_memchr("sdic", spec, -1)) {
        index = (char *)my_memchr(flags, spec, -1) - flags;
        return (concat_fns[index](ap));
    } else {
        my_iob_putc('%');
        my_iob_putc(spec);
        return (2);
    }
}