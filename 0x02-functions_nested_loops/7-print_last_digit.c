#include "holberton.h"
/**
 * main - prints the sign of a number
 *Return: Always 0 (Success)
 */
int print_last_digit(int last)
{
	int digit;

	digit = (last % 10);

	if (digit < 0)
	{
		digit = (-1 * digit);
	}

	_putchar(digit + 0);
	return (digit);
}
