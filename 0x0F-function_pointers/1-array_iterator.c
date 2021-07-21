#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function
 * @array: pointer to array
 * @size: size of array, is number
 * @action: pointer to conduce to function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}
	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}
