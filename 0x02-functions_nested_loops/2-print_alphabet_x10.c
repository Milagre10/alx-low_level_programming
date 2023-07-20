#include<main.h>
/**
 * main- Entry point
 * Description: Print lowercase and uppercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int n;
	int i;

	for(n = 0; n <= 10; n++)
	{
		for(i = 97; i <= 22; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
