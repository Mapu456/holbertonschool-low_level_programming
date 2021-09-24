#include "main.h"
#include <stdio.h>
/**
 * _atoi - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _atoi(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d\n", s[i]);
	}
	return (0);
}
