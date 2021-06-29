#include "holberton.h"

/**
 * rev_string - returns the length of a string
 * @s: string reverse
 *
 * Return: the length of the string
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	int x = s[0];

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i > 0; i--)
	{
		len--;
		x = s[i];
		s[i] = s[len];
		s[len] = x;
	}
}
