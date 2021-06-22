#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: is int
 *Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar ((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		n = n * -1;
		_putchar ((n % 10) + '0');
		return (n % 10);
	}
}
