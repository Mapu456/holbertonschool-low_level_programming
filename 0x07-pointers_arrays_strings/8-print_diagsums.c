#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Write a function locates a character in a string
 * @a: strings
 * @size: strings
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum0;
	int sum1;

	sum0 = 0;
	sum1 = 0;


	for (i = 0; i < size; i++)
	{
		j = i + 1;
		sum0 += a[(size * i) + i];
		sum1 += a[(size - 1) * j];
	}
	printf("%d, %d\n", sum0, sum1);
}
