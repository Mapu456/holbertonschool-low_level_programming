#include "holberton.h"

/**
 * more_numbers - function that checks for uppercase character
 *
 */
void print_line(int n)
{
	int c;

	while ((c = n))
	{
		if (c <= 0)
		{
			_putchar ('\n');
		}
		c++;
		_putchar ('-');
		_putchar ('\n');
	}
}
