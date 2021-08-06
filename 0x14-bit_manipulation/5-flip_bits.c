#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * flip_bits - function
 * @n: input
 * @m: index
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int x;

	x = n ^ m;
	while (x > 0)
	{
		if (x & 1)
			count++;
		x = x >> 1;
	}
	return (count);
}
