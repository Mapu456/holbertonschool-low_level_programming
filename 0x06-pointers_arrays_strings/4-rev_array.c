#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: strings
 * @n: strings
 * Return: number
 */
void reverse_array(int *a, int n)
{
	int j;
	int x;

	for (j = 0; j < n; j++)
	{
		n--;
		x = a[j];
		a[j] = a[n];
		a[n] = x;
	}
}
