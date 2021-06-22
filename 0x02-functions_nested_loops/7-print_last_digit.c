#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @last: is int
 *Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;

	if (digit >= 0)
	{
		digit = (-1 * digit);
	}

	_putchar(digit + '0');
	return (digit);
}
