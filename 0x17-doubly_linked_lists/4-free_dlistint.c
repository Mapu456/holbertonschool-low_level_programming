#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - function to return i
 * @head: the first in the head
 * Return: i the number of h elements
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux1;

	while (head != NULL)
	{
		aux1 = head;
		head = head->next;
		free(aux1);
	}
}
