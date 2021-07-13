#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - Write a function locates a character in a string
 * @s: strings
 * @accept: strings
 * Return: char
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, c, j, res;

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
		if (j == 0)
		{
			break;
		}
		res++;
		i++;
	}
	return (i);
}
