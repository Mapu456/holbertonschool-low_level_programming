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
		putchar('0');
	}
	for (j = c - 1; j >= 0; j--)
	{
		result = n >> j;
		if (result & 1)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	}
}
