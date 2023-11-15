#include "main.h"
/**
 * print_binary - converts unsigned integer to binary
 * @args: list of arguments
 * Return: Binary Number
 **/

int print_binary(va_list args)
{
	int bit;

	unsigned int value = va_arg(args, unsigned int);
	int count = 0;

	while (value)
	{
		bit = value % 2;
		_putchar('0' + bit);
		value = value / 2;
		count++;
	}
	if (count == 0)
	{
		_putchar('0');
		count++;
	}
	return (count);
}

