#include "main.h"
#include <stdio.h>
/**
 * *_strstr - Write a function locates a character in a string
 * @haystack: strings
 * @needle: strings
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int j;
	int c;

	for (j = 0; haystack[j] >= '\0'; j++)
	{
		for (c = 0; needle[c] >= '\0'; c++)
		{
			if (haystack[j + c] != needle[c])
			{
				break;
			}
		}
		if (!needle[c])
		{
			return (&haystack[j]);
		}
	}
	return ('\0');
}
