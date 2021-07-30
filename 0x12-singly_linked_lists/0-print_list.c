#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints the arguments
 * @h: is the space with the values of struct
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	for (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
