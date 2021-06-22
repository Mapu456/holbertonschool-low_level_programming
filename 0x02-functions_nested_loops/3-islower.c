#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * @c: is int
 * main - checks for lowercase character
 *Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c == 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
