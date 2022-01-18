#include "search_algos.h"
/**
 * binary_search - function that searches for a value
 * in an array of integers using the Linear search.
 * @array: array of integers.
 * @size: size of array.
 * @value: search value.
 * Return: index of search value in array or -1 if doesn't exist in array.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, i = 0;
	size_t r = size - 1;
	size_t m = 0;

	if (array == NULL || !size || !value)
	{
		return (-1);
	}
	else
	{
		while (l <= r)
		{
			printf("Searching in array: ");
			for (i = l; i <= r; i++)
			{
				if (i != r)
				{
					printf("%d, ", array[i]);
				}
				else
				{
					printf("%d\n", array[i]);
				}
			}
			m = l + (r - l) / 2;
			if (array[m] == value)
				return (m);
			if (array[m] < value)
				l = m + 1;
			else
				r = m - 1;
		}
	}
	return (-1);
}
