#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - returns the length of a string
 * @s: string reverse
 *
 * Return: the length of the string
 */
void print_rev(char *s)
{
	int i, len = 0;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
