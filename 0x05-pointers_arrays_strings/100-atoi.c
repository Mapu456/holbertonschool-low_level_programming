#include "holberton.h"
#include <stdio.h>

/**
 * _puts - returns the length of a string
 * @str: string
 *
 * Return: the length of the string
 */
int _atoi(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar (s[i]);
		_putchar ('\n');
	}
	return (0);
}
