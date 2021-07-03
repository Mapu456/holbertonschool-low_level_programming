#include "holberton.h"
#include <stdio.h>
/**
 * *string_toupper - reverses the content of an array of integers
 * @ptr: strings
 * Return: number
 */
char *string_toupper(char *ptr)
{
	int i = 0;

	while( ptr[i] != '\0' )
	{
		if( ptr[i] >= 'a' && ptr[i] <= 'z' )
		{
			ptr[i] = ptr[i] - 32;
		}
		i++;
	}
	return (ptr);
}
