#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - print only one character out of two
 * @str: input
 * Return: number
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
}
