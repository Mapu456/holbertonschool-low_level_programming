#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * string_nconcat - nested loop to make grid
 * @s1: width input
 * @s2: width input
 * @n: width input
 * Return: p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, j;
	unsigned int c, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (c = 0; s2[c] != '\0'; c++)
	{
	}
	if (n >= c)
	{
		n = c;
	}
	p = malloc(((i + c) * sizeof(char)) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			p[j] = s1[j];
		}
		for (a = 0; a < n; a++)
		{
			p[j + a] = s2[a];
		}
		p[j + a] = '\0';
	}
	return (p);
}
