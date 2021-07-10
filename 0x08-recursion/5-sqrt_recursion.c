#include "holberton.h"
int natural_square_root(int n, int c);
/**
* _sqrt_recursion - give me the number
* @n: int
* @c: counter
* natural_square_root - obtain the natural square root
* Return - in natural_square_root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_square_root(n, 1));
}
/**
 * natural_square_root - checks if perfect square
 * @n: input
 * @c: counter
 * Return: if square root
 */
int natural_square_root(int n, int c)
{
	if (c * c > n)
		return (-1);
	if (c * c == n)
		return (c);
	return (natural_square_root(n, c + 1));
}
