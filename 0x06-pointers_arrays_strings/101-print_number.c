#include "holberton.h"
#include <stdio.h>
/**
 * print_number - Write a function locates a character in a string
 * @n: strings
 */
void print_number(int n)
{
	int c;

	if (n < 0)
	{
		_putchar('-');
		c = -n;
	} else
	{
		c = n;
	}

	if (c / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((c % 10) + '0');
}
