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
        int len;

	len = strlen(s);

	printf("%d\n", len);
}
