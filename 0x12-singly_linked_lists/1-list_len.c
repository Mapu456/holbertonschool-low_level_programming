#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that prints the arguments
 * @h: is the space with the values of struct
 *
 * Return: the number of nodes printed
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
