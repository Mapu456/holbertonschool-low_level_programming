#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: is the int
 * Return: 0
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
