#include "holberton.h"
#include <stdio.h>
/**
 * *cap_string - reverses the content of an array of integers
 * @str: strings
 * Return: number
 */
char *cap_string(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
			continue;
		}
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '.')
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			continue;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
	}
	return (str);
}
