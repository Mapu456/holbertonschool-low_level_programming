#include "holberton.h"

/**
 * _strlen_recursion - returns the factorial of a given number
 * @n: input
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
		_putchar('error');
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
