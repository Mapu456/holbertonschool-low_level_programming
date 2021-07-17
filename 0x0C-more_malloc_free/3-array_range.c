#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - nested loop to make grid
 * @min: width input
 * @max: width input
 * Return: p
 */
int *array_range(int min, int max)
{
	int *p;
	int i, c;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		c = min;
		for (i = 0; i <= (max - min); i++, c++)
		{
			p[i] = c;
		}
	}
	return (p);
}
