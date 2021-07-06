#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - Write a function locates a character in a string
 * @s: strings
 * @accept: strings
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int j;
	int i;

	for (j = 0; s[j] >= '\0'; j++)
	{
		for (i = 0; accept[i] >= '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				return (s + j);
			}
		}
	}
	return ('\0');
}
