#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Write a function locates a character in a string
 * @s: strings
 * @accept: strings
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, c, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[i] == accept[c])
			{
				j = 1;
			}
		}
		c = 0;
		if (j == 1)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
