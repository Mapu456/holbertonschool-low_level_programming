#include "holberton.h"
/**
 * _sqrt_recursion - give me the number
 * @n: int
 * @c: int
 * natural_square_root - obtain the natural square root
 * Return - in natural_square_root
 */
int natural_square_root(int n, int c);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_square_root(n, 1));
}
int natural_square_root(int n, int c)
{
	if (c * c > n)
		return (-1);
	if (c * c == n)
		return (c);
	return (natural_square_root(n, c + 1));
}
