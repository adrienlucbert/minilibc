/*
** EPITECH PROJECT, 2019
** My
** File description:
** header
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>

int my_atoi(char const *nptr);
int my_putnbr(int nb);
char *my_itoa(int nb);
int my_putchar(char c);
int my_putstr(char const *str);
void *my_calloc(size_t nmemb, size_t size);
void *my_realloc(void *ptr, size_t size);
void *my_memset(void *s, int c, size_t n);
void *my_memcpy(void *dest, const void *src);
char *my_strcpy(char *dest, char const *src);
void *my_memncpy(void *dest, const void *src, size_t n);
char *my_strncpy(char *dest, char const *src, size_t n);
int my_memcmp(const void *s1, const void *s2);
int my_memncmp(const void *s1, const void *s2, size_t n);
int my_strcmp(const char *s1, const char *s2);
int my_strncmp(const char *s1, const char *s2, size_t n);
size_t my_memlen(void const *ptr, size_t size);
size_t my_strlen(char const *s);
void *my_memndup(const void *src, size_t n);
char *my_strndup(char const *src, size_t n);
void *my_memdup(const void *src);
char *my_strdup(char const *src);
void *my_memcat(void *dest, void const *src);
char *my_strcat(char *dest, char const *src);
void *my_memchr(const void *str, int c);
char *my_strchr(char const *s, int c);
void *my_memnchr(const void *s, int c, size_t n);
char *my_strnchr(char const *s, int c, size_t n);
void *my_memmem(void const *hay, size_t h_len, void const *nee, size_t n_len);
char *my_strstr(char const *haystack, char const *needle);

#endif /* !MY_H_ */