#include "main.h"
/**
 * 
 * Description: Print lowercase 
 *
 * @c: The chacacter in ASCII code.
 *
 * Return: 1 if lowercase 0 rest
 */
int _islower(int c)
{
	if (c >= 97 && c <=122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

