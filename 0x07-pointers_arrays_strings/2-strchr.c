#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - Write a function locates a character in a string
 * @s: strings
 * @c: strings
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}
	return (NULL);
}
