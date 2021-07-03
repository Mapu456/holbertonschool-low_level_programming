#include "holberton.h"
#include <stdio.h>


/**
 * *leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *scr)
{
	int i = 0, c;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	while (scr[i] != '\0')
	{
		for (c = 0; c < 10; c++)
		{
			if (scr[i] == x[c])
			{
				scr[i] = y[c];
			}
		}
		i++;
	}

	return (scr);
}
