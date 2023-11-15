#include "main.h"
/**
 * print_string - Prints a string
 * @values: list of arguments
 * Return: Success Always 0
 */
int print_string(va_list values)
{
	char *string;
	int i, str_length;

	string = va_arg(values, char *);

	if (string == NULL)
	{
		string = "(null)";
		str_length = _strlen(string);
		for (i = 0; i < str_length; i++)
		{
			_putchar(string[i]);
		}
		return (str_length);
	}
	else
	{
		str_length = _strlen(string);
		for (i = 0; i < str_length; i++)
		{
			_putchar(string[i]);
		}
		return (str_length);
	}
}


