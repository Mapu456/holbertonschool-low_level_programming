#include "holberton.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the int
 */
void print_triangle(int size)
{
	int c;
	int i;

	for (c = 1; c <= size; c++)
	{
		for (i = 1; i <= size; i++)
		{
			if (i <= size - c)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
