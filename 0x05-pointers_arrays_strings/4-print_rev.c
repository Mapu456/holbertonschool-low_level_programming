#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - returns the length of a string
 * @str: string
 *
 * Return: the length of the string
 */
void print_rev(char *s)
{
	int i, len=0;

	len = strlen(s);

	for(i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
