#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @num: the int
 * main - prints the sign of a number
 *Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
