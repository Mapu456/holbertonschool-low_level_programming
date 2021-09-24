#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatenates two strings
 * @src: strings
 * @dest: strings
 * Return: number
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; src[i] != '\0'; ++i, ++j)
	{
		dest[j] = src[i];
	}
	dest[j] = '\0';
	return (dest);
}
