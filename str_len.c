#include "main.h"
/**
 * _strlen - checks the length of the string
 * @s: -string to be checked
 * Return: The length of the string
 */

int _strlen(char *s)
{

	int str_length = 0;

	while (s[str_length])
	{
		str_length++;
	}
	return (str_length);
}

