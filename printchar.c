#include "main.h"
/**
 * print_char - Printf function
 * @values: argument list
 * Return: Success Alwyays 0
 */
int print_char(va_list values)
{
char string;
string = va_arg(values, int);
_putchar(string);
return (0);
}

