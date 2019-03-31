/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my
*/

#ifndef MY_IO_H_
#define MY_IO_H_

#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/*
 *  IO_BUF
 */

#define MY_BUFSIZE  (1024)

typedef struct my_iobuf {
    int cnt;
    char *ptr;
    char *base;
    int fd;
} my_FILE;

my_FILE my_iob;

void my_iob_init(int fd);
void my_iob_destroy(void);
void my_iob_putc(char c);
void my_iob_flush(void);
char my_iob_getc(void);

int my_printf(const char *format, ...);
int my_fprintf(FILE *stream, char const *format, ...);
int my_dprintf(int fd, char const *format, ...);
int my_sprintf(char *str, char const *format, ...);
int my_snprintf(char *str, size_t size, char const *format, ...);

int my_vprintf(const char *format, va_list ap);
int my_vfprintf(FILE *stream, char const *format, va_list ap);
int my_vdprintf(int fd, const char *format, va_list ap);
int my_vsprintf(char *str, const char *format, va_list ap);
int my_vsnprintf(char *str, size_t size, char const *format, va_list ap);

#endif /* !MY_IO_H_ */