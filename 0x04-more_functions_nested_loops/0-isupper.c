#include "main.h"
/**
 * _isupper - Shows 1 if the input is a uppercase and 0 rest.
 * @c: The character in ASCII code.
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
