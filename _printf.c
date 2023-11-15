#include "main.h"

/**
 * _printf - produces output according to format
 * @format: format specifier
 * Return: Number of characters printed
 **/

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int iterator;
	va_list args;

	match_placeholder_specifier match[] =

	{
		{"%c", print_char}, {"%s", print_string},
		{"%%", print_percent}, {"%d", handle_decimal},
		{"%i", handle_int}, {"%b", print_binary}
	};

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (1);
	}
	while (format[i] != '\0')
	{
		iterator = 5;
		while (iterator >= 0)
		{
			if (match[iterator].placeholder[0] == format[i] &&
					match[iterator].placeholder[1] == format[i + 1])
			{
				count = count + match[iterator].function(args);
				i += 2;
			}
			iterator--;
		}
		_putchar(format[i]);
		i++;
		count++;
	}
	va_end(args);
	return (count);
}

