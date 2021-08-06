#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * set_bit - function
 * @n: input
 * @index: index
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = 64;
	unsigned int tempo;

	if (index <= bits)
	{
		tempo = 1 << index;
		*n = *n | tempo;
		return (1);
	}
	else
	{
		return (-1);
	}
}
