#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print only one character out of two
 * @a: input
 * @n: input
 * Return: number
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
