/*
** EPITECH PROJECT, 2019
** MyStdIO
** File description:
** my_io_vsprintf
*/

#include "my.h"
#include "mystdio.h"

static int my_vsprintf_concat_s(char *str, va_list ap)
{
    char *arg = va_arg(ap, char *);
    char *ptr = str;
    int len = 0;

    if (!arg)
        return (0);
    while (*ptr)
        ++ptr;
    while (*arg) {
        ptr[len++] = *arg;
        ++arg;
    }
    return (len);
}

static int my_vsprintf_concat_di(char *str, va_list ap)
{
    char *arg = my_itoa(va_arg(ap, int));
    int arg_len = 0;
    int str_len = 0;

    if (!arg)
        return (0);
    arg_len = my_memlen(arg, sizeof(char));
    str_len = my_memlen(str, sizeof(char));
    my_memncpy(str + str_len, arg, arg_len);
    free(arg);
    return (arg_len);
}

static int my_vsprintf_concat_c(char *str, va_list ap)
{
    char arg = va_arg(ap, int);
    int str_len = 0;

    if (!arg)
        return (0);
    str_len = my_memlen(str, sizeof(char));
    str[str_len] = arg;
    return (1);
}

int my_vsprintf_concat_data(char *str, char spec, va_list ap)
{
    int len = my_memlen(str, sizeof(char));
    char *flags = "sdic";
    int index = -1;
    int (*concat_fns[4])(char *, va_list);

    concat_fns[0] = my_vsprintf_concat_s;
    concat_fns[1] = my_vsprintf_concat_di;
    concat_fns[2] = my_vsprintf_concat_di;
    concat_fns[3] = my_vsprintf_concat_c;
    if (my_strchr("sdic", spec)) {
        index = (char *)my_strchr(flags, spec) - flags;
        return (concat_fns[index](str, ap));
    } else {
        str[len] = '%';
        str[len + 1] = spec;
        return (2);
    }
}