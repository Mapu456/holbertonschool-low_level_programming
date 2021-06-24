#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	/* if a  is greater than both b and c, a is the largest */
	if (a > b && a > c)
	{
		largest = a;
	}
	/* if b is greater than both a and c, b is the largest */
	else if (b > a && b > c)
	{
		largest = b;
	}
	/* if both above conditions are false, c is the largest */
	else
	{
		largest = c;
	}

	return (largest);
}
