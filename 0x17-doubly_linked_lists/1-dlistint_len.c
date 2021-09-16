#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - function to return i
 * @h: the first in the head
 * Return: i the number of h elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
