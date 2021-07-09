#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the factorial of a given number
 * @x: input
 * @y: input
 * Return: factorial
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
