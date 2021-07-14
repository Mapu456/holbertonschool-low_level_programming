#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  creates an array of chars
 * size - the number of characters
 * @str: size input
 * @p: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *p;
	int i;
	int c;

	if (str == NULL)
	{
		return (NULL);
	}

	for (c = 0; str[c] != '\0'; c++)
	{
	}

	p = malloc(sizeof(char) * c + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < c; i++)
		{
			p[i] = str[i];
		}
		p[i] = '\0';
	}
	return (p);
}
