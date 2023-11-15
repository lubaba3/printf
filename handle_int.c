#include "main.h"

/**
 * handle_int - handles and print integer specifier
 * @args: list of arguments
 * Return: number of character printed
 **/
int handle_int(va_list args)
{
	int number = va_arg(args, int);
	int i = 0;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
		i++;
	}
	if ((number / 10) != 0)
	{
		i += handle_int_recursive(number / 10);
	}
	_putchar((number % 10) + '0');
	return (i + 1);
}

/**
 * handle_int_recursive - handle int recursively
 * @num: number to be printed
 * Return: number of chars printed
 **/
int handle_int_recursive(int num)
{
	int i = 0;

	if ((num / 10) != 0)
	{
		i += handle_int_recursive(num / 10);
	}
	_putchar((num % 10) + '0');
	return (i + 1);
}

/**
 * handle_decimal - handles and print decimal specifier
 * @args: list of arguments
 * Return: number of character printed
 **/
int handle_decimal(va_list args)
{
	int number = va_arg(args, int);
	int i = 0;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
		i++;
	}
	if ((number / 10) != 0)
	{
		i += handle_decimal_recursive(number / 10);
	}
	_putchar(number % 10 + '0');
	return (i + 1);
}

/**
 * handle_decimal_recursive - handle int recursively
 * @num: number to be printed
 * Return: number of chars printed
 **/
int handle_decimal_recursive(int num)
{
	int i = 0;

	if ((num / 10) != 0)
	{
		i += handle_decimal_recursive(num / 10);
	}
	_putchar((num % 10) + '0');
	return (i + 1);
}

