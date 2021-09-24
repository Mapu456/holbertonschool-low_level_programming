#include "main.h"
#include <stdio.h>
/**
 * *_strncat - concatenates two strings
 * @src: strings
 * @dest: strings
 * @n: strings
 * Return: number
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int c;
	int x;

	while (dest[i] != '\0')
	{
		i++;
	}
	/**si el if es cierto: c = n || 1024 = 1024*/
	for (c = 0; c < n; c++)
	{
		x = i + c;
		dest[x] = src[c];
		if (src[c] == '\0')
			c = n;
	}
	return (dest);
}
