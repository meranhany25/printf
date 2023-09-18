#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_decimal(va_list args);

#endif
