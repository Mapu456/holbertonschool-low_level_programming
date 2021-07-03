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
	int a;
	int organize[] = {',', ';', '.', '?', '"',
			  '(', ')', '{', '}', ' ', '\n', '\t'};

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
		for (a = 0; a < 13; a++)
		{
			if (str[i] == organize[a])
			{

				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
