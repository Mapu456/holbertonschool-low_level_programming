#include "holberton.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the int
 */
void print_triangle(int size)
{
	int c;
	int i;
	int a;

	c = 0;
	i = 0;

	if (size > 0)
	{
		while (i < size)
		{
			a = size - i - 1;
			while (c < size)
			{
				if (a > c)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				c++;
			}
			i++;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
