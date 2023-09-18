#ifndef MAIN_H
#define MAIN_H

/*All Includes Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/*_putchar.c*/
int _putchar(char ch);
/*char.c*/
int char_print(va_list args, int *count);
/*string.c*/
int string_print(va_list list, int *count);
/*integer.c*/
int integer_print(va_list list, int *count);
/*unsign.c*/
int unsigned_print(unsigned int numbers, int base, const char *digits);
/*_rintf.c*/
int _printf(const char *format, ...);

#endif

