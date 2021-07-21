#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer of a function
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int c;

	if (array == NULL)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		c = cmp(array[i]);
		if (c != 0)
		{
			return (i);
		}
	}
}
