#include "holberton.h"
#include <stdio.h>

/**
 * int _strlen -  returns the length of a string.
 *
 * @s: the int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; i <= *s; i++)
	{
		_putchar (i + '0');
	}
	return (i);
}
