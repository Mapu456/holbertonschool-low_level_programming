#include "holberton.h"
/**
 * int add - prints the last digit of a number
 * @a: is int
 * @b: is int
 *Return: value of the last digit
 */
int add(int a, int b)
{
	int sum;

	sum = a + b;

	_putchar(sum + '0');
	return (sum);

}
