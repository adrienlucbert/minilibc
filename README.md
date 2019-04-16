# Mini LibC

This project aims to implement some functions from the standard LibC. Implementing those functions forces me to dig into documentations and sources to understand how the standard libC was thought and how it works.  

As this is a work in progress, feel free to give advice or report issues (my contact: adrien.lucbert@epitech.eu).

I don't aim to recode the entire libC, that's why I haven't listed every single function from the libC in the hereunder TODO list. Moreover, I have made some additional functions, such as my_fac or my_putnbr, which are not in the standard libC.

## Some explanation

#### <mymath.h>
Functions from the the <math.h> have mostly been approximated using the Taylor Series. In the *bonus* directory, you will find evaluation functions, which give you the error rate for each implemented function.

#### <mystdio.h>
In order to reproduce the buffered functions from <stdio.h> (such as printf), I have mimed the functioning of the former libC's FILE struct. According to page 176 of the *Second Edition of The C Programming Language*, by KERNIGHAN and RITCHIE, it used to look like :
```
typedef struct iobuf {
    int cnt; /* characters left */
    char *ptr; /* next character position */
    char *base; /* location of buffer */
    int flag; /* mode of file access */
    int fd; /* file descriptor */
} FILE;
```
It doesn't match with the latest definition of FILE, but the latest being much more abstract, I chose to stick to this one.
This way I have the following structure :
```
typedef struct my_iobuf {
    int cnt;
    char *ptr;
    char *base;
    int fd;
} my_FILE;
```
I then create a global instance of my_FILE, which I called my_iob. In my buffered functions, I also chose to use this only one global buffer, whereas (if I am not mistaken) the libC uses one global iobuf per file descriptor.

Also, the buffer being allocated (if used), it needs to be freed. To do this, the function *void my_iob_destroy(void)* needs to be called at the end of the program execution.

## TODO list

:heavy_check_mark: Done\
:x: Not done\
:clock3: In progress

#### From the <stdlib.h>
:heavy_check_mark: char *my_itoa(int nb)\
:x: char *my_ftoa(float nb)\
:heavy_check_mark: int my_atoi(char const *nptr)\
:x: double my_atof(char const *nptr)\
:heavy_check_mark: void *my_calloc(size_t nmemb, size_t size)\
:heavy_check_mark: void *my_realloc(void *ptr, size_t size)

#### From the <string.h>
:heavy_check_mark: void *my_memchr(const void *str, int c)\
:heavy_check_mark: void *my_memnchr(const void *str, int c, size_t n)\
:heavy_check_mark: char *my_strchr(char const *s, int c)\
:heavy_check_mark: char *my_strnchr(char const *s, int c, size_t n)\
:heavy_check_mark: int my_memcmp(void const *s1, void const *s1)\
:heavy_check_mark: int my_memncmp(void const *s1, void const *s2, size_t n)\
:heavy_check_mark: int my_strcmp(void const *s1, void const *s2)\
:heavy_check_mark: int my_strncmp(void const *s1, void const *s2, size_t n)\
:heavy_check_mark: void *my_memcpy(void *dest, void const *src)\
:heavy_check_mark: void *my_memncpy(void *dest, void const *src, size_t n)\
:heavy_check_mark: char *my_strcpy(char *dest, char const *src)\
:heavy_check_mark: char *my_strncpy(char *dest, char const *src, size_t n)\
:heavy_check_mark: void *my_memset(void *str, int c, size_t n)\
:heavy_check_mark: size_t my_memlen(void const *ptr, size_t size)\
:heavy_check_mark: size_t my_strlen(char const *s)\
:heavy_check_mark: void *my_memdup(void const *src)\
:heavy_check_mark: void *my_memndup(void const *src, size_t n)\
:heavy_check_mark: char *my_strdup(char const *src)\
:heavy_check_mark: char *my_strndup(char const *src, size_t n)\
:heavy_check_mark: void *my_memcat(void *dest, void const *src)\
:heavy_check_mark: char *my_memcat(char *dest, char const *src)\
:heavy_check_mark: void *my_memmem(void const *hay, size_t h_len, void const *nee, size_t n_len)\
:heavy_check_mark: char *my_strstr(char const *haystack, char const *needle)

#### From the <stdio.h>
:heavy_check_mark: int my_putchar(char c) **(using write)**\
:heavy_check_mark: int my_putstr(char const *str) **(using write)**\
:heavy_check_mark: int my_putnbr(int nb)\
:heavy_check_mark: void my_iob_putc(char c) **(using my own I/O buffer)**\
:heavy_check_mark: char my_iob_getc(void) **(using my own I/O buffer)**\
:heavy_check_mark: int my_printf(const char *format, ...)\
:heavy_check_mark: int my_fprintf(FILE *stream, char const *format, ...)\
:heavy_check_mark: int my_dprintf(int fd, char const *format, ...)\
:heavy_check_mark: int my_sprintf(char *str, char const *format, ...)\
:heavy_check_mark: int my_snprintf(char *str, size_t size, char const *format, ...)\
:clock3: int my_vprintf(const char *format, va_list ap)\
:clock3: int my_vfprintf(FILE *stream, char const *format, va_list ap)\
:clock3: int my_vdprintf(int fd, const char *format, va_list ap)\
:clock3: int my_vsprintf(char *str, const char *format, va_list ap)\
:clock3: int my_vsnprintf(char *str, size_t size, char const *format, va_list ap)

#### From the <math.h>
:x: double log(double x)\
:x: double exp(double x)\
:clock3: double my_pow(double x, double y)\
:heavy_check_mark: double my_sqrt(double x)\
:clock3: double my_fac(double x)\
:heavy_check_mark: double my_sin(double x)\
:x: double my_sinh(double x)\
:heavy_check_mark: double my_cos(double x)\
:x: double my_cosh(double x)\
:heavy_check_mark: double my_tan(double x)\
:x: double my_tanh(double x)\
:heavy_check_mark: double my_asin(double x)\
:heavy_check_mark: double my_acos(double x)\
:heavy_check_mark: double my_atan(double x)\
:heavy_check_mark: double my_atan2(double y, double x)\
:heavy_check_mark: double my_abs(double x)\
:heavy_check_mark: double my_floor(double x)\
:heavy_check_mark: double my_ceil(double x)\
:heavy_check_mark: double my_round(double x)