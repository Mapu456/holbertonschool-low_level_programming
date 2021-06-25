#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: is the variable
 */
void print_square(int size)
{
	int c;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
			for (i = 2; i <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
