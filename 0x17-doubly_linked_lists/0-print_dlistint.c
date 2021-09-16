#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function to return i
 * @h: the first in the head
 * Return: i the number of h elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
