#include <stdio.h>
#include "holberton.h"
/**
 * main - print if the last digit is positive, zero or negative
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
		}
	} else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
		}
	} else
	{
		printf("98");
	}
	_putchar('\n');
}
