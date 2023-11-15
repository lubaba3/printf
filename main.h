#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

/**
 * struct format_specifier - format specifier matching struct
 * @placeholder: specifier placeholder
 * @function: associated function
**/

typedef struct format_specifier
{
	char *placeholder;
	int (*function)();
} match_placeholder_specifier;

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int print_string(va_list values);
int print_char(va_list values);
int print_percent(void);
int print_binary(va_list args);

int handle_int(va_list args);
int handle_int_recursive(int num);
int handle_decimal(va_list args);
int handle_decimal_recursive(int num);

#endif


