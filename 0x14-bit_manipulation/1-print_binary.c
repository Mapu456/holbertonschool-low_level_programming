#include <stdio.h>
#include "main.h"
/**
 * print_binary - function
 * @n: const char
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int c, result;
	int j;

	for (c = 0; n >> c; c++)
	{
		result = n >> c;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	for (j = c - 1; j >= 0; j--)
	{
		result = n >> j;
		if (result & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
