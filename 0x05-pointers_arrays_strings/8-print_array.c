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

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
