/*
** EPITECH PROJECT, 2019
** MyStdIO
** File description:
** my_iob
*/

#include "my.h"
#include "mystdio.h"

int _my_iob = 0;
my_FILE my_iob;

void my_iob_init(int fd)
{
    if (!_my_iob) {
        my_iob.base = my_calloc(MY_BUFSIZE, sizeof(char));
        if (!my_iob.base)
            return;
        my_iob.ptr = my_iob.base;
        my_iob.cnt = MY_BUFSIZE;
        my_iob.fd = -1;
        _my_iob = 1;
    }
    if (fd != -1 && fd != my_iob.fd) {
        my_iob_flush();
        my_iob.fd = fd;
    }
}

void my_iob_flush(void)
{
    if (my_iob.fd == -1 || !my_iob.base)
        return;
    write(my_iob.fd, my_iob.base, MY_BUFSIZE - my_iob.cnt);
    my_memset(my_iob.base, 0, MY_BUFSIZE);
    my_iob.ptr = my_iob.base;
    my_iob.cnt = MY_BUFSIZE;
}

void my_iob_putc(char c)
{
    my_iob_init(-1);
    if (!my_iob.base)
        return;
    if (my_iob.cnt > 0) {
        *my_iob.ptr = c;
        --my_iob.cnt;
        ++my_iob.ptr;
    }
    if (c == '\n' || my_iob.cnt <= 0)
        my_iob_flush();
}

char my_iob_getc(void)
{
    my_iob_init(-1);
    if (!my_iob.base)
        return (0);
    if (!my_iob.base || my_iob.cnt < 0) {
        return (0);
    } else {
        --my_iob.cnt;
        ++my_iob.ptr;
        return (*my_iob.ptr);
    }
}

void my_iob_destroy(void)
{
    if (_my_iob) {
        my_iob_flush();
        if (my_iob.base)
            free(my_iob.base);
        my_iob.base = NULL;
        my_iob.ptr = NULL;
        my_iob.cnt = MY_BUFSIZE;
        my_iob.fd = -1;
        _my_iob = 0;
    }
}