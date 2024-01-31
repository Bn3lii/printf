#ifndef _MAIN_
#define _MAIN_

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int print_unsign(unsigned int num, int base, const char *digits);
int handle_c(va_list args, int *len);
int string(va_list args, int *len);
int handle_decimal(va_list args, int *len);
int handle_unsigned(va_list args, int *len);
int handle_octal(va_list args, int *len);
int handle_hex(va_list args, int *len);
int handle_hex_upper(va_list args, int *len);
int handle_pointer(va_list args, int *len);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
