#include "holberton.h"
#include <stdio.h>

/**
 * int _strlen -  returns the length of a string.
 *
 * @s: the int
 * return : i
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
