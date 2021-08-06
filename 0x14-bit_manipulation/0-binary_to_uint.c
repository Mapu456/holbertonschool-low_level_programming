#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - function
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int j;
	int result = 0;
	int expo = 1;

	if (b)
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] != 48 && b[i] != 49)
			{
				return (0);
			}
		}
		for (j = (i - 1); j >= 0; j--)
		{
			result += ((b[j] - 48) * expo);
			expo *= 2;
		}
	}
	return (result);
}
