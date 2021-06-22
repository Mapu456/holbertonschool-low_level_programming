#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: is int
 *Return: Always 0 (Success)
 */
int print_last_digit(int digit)
{
	if (digit >= 0)
	{
		_putchar (digit % 10 + '0');
		return (digit % 10);
	}
	else
	{
		digit = digit * -1;
		_putchar (digit % 10 + '0');
		return (digit % 10);
	}
}
