#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: is int
 *Return: value of the last digit
 */
int print_last_digit(int c)
{
	int n;

	n = (c % 10);

	if (n < 0)
	{
		n = (-1 * n);
	}

	_putchar(n + '0');
	return (n);
}
