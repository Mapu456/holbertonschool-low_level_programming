#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - returns the length of a string
 * @s: string reverse
 *
 * Return: the length of the string
 */
void rev_string(char *s)
{
	int i, len = 0;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
