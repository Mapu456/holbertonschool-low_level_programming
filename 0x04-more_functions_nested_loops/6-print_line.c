#include "holberton.h"

/**
 * print_line - function that checks for uppercase character
 * @n: is the int
 */
void print_line(int n)
{
	int c = 0;

	if (n > 0)
	{
		while (c <= n)
		{
			_putchar('_');
			c++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
