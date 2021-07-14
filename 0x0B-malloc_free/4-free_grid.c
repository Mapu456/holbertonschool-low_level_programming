#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - nested loop to make grid
 * @grid: width input
 * @height: height input
 * Return: pointer to 2D
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0 || grid == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
		return;
	}
}
