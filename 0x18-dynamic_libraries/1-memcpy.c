#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - Write a function that copies memory area.
 * @src: strings
 * @dest: strings
 * @n: strings
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
