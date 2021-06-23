#include <stdio.h>
#include "holberton.h"
/**
 * main - print if the last digit is positive, zero or negative
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i);
			_putchar(',');
		}
	}else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i);
			_putchar(',');
		}
	}else
	{
		_putchar(98);
	}
	_putchar('\n');
}
