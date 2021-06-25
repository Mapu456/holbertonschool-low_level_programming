#include "holberton.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: is the int
 */
void print_diagonal(int n)
{
	int c;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			for (i = 1; i < c; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
