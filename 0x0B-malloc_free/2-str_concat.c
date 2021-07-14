#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  creates an array of chars
 * @s1: size input
 * @s2: char
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i;
	int c;
	int j;
	int n;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = s2 = "";
	}

	for (c = 0; s1[c] != '\0'; c++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	p = malloc(sizeof(char) * c + j + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < c; i++)
		{
			p[i] = s1[i];
		}
		for (n = 0; n < j; n++)
		{
			p[i + n] = s2[n];
		}
		p[i + n] = '\0';
	}
	return (p);
}
