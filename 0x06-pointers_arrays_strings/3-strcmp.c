#include "holberton.h"
/**
 * _strcmp - concatenates two strings
 * @s1: strings
 * @s2: strings
 * Return: number
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0;
	int i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[c] != '\0')
	{
		c++;
	}
	if (i < c)
	{
		return (-15);
	}
	else if (c < i)
	{
		return (15);
	}
	else
	{
		return (0);
	}

}
