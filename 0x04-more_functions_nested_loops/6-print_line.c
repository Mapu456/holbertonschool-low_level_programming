#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: is the int
 * Return: 0
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
