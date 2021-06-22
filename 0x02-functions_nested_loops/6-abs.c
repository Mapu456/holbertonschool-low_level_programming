#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer.
 * @num: the int
 * main - prints the sign of a number
 *Return: Always 0 (Success)
 */
int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
		return (num * -1);
}
