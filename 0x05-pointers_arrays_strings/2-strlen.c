#include "holberton.h"
#include <stdio.h>

/**
 * _strlen -  returns the length of a string.
 * @s: the int
 * Return : i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
