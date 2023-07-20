#include "main.h"
/**
 * main- Entry point
 * Description: Print lowercase and uppercase
 * Return: 1 f is_ower and 0 else
 * @c: The caracter is ASCII code
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

