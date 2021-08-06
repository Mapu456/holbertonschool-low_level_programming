#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * get_bit - function
 * @n: input
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = 64;

	if (index <= bits)
	{
		return ((n >> index) & 1);
	}
	else
	{
		return (-1);
	}
}


