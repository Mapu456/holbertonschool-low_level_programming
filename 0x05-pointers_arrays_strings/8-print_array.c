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
	int c;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		while (a[i] != '\0')
		{
			i++;
			c = i - 1;
			if (c < n)
			{
				printf("%d", a[c]);
			}
		}
	}
	printf("\n");
}
