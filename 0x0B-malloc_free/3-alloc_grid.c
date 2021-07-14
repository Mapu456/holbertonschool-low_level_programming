#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2D
 */
int **alloc_grid(int width, int height)
{
	int i;
	int n;
	int f;
	int **newstr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	newstr = malloc(sizeof(int *) * height);
	if (newstr == NULL)
	{
		return (00);
	}
	for (i = 0; i <= height; i++)
	{
		newstr[i] = malloc(sizeof(int) * width + 1);
		if (newstr[i] == NULL)
		{
			for (i; i >= 0; i--)
			{
				free(newstr[i]);
				free(newstr);
			}
		}
	}
	for (f = 0; f <= height; f++)
	{
		for (n = 0; n < width; n++)
		{
			newstr[f][n] = 0;
		}
	}
	return (newstr);
}
