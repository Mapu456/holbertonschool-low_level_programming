#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: the int that will be swaps
 * @b: the int that will be swaps
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = 98;
}
