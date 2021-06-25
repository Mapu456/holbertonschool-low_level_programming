#include "holberton.h"

/**
 * print_triangle - prints a triangle
 *@size: size of the triangle
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int c;
	int i;

	for (c = 1; c <= size; c++)
	{
		for (i = 1; i <= size; i++)
		{
			if (c <= size - i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
