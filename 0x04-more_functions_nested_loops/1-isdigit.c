#include "main.h"

/**
 * _isdigit- function that checks for a digit (0 through 9).
 * followed by a new line
 * @c: The caractere no ASCII code.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 90 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

