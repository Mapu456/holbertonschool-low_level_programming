#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - function to return i
 * @n: the first in the head
 * @head: the first in the head
 * Return: i the number of h elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *aux1;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head != NULL)
	{
		aux1 = *head;

		while (aux1->next != NULL)
		{
			aux1 = aux1->next;
		}
		aux1->next = new_node;
		return (aux1->next);
	}
	*head = new_node;

	return (*head);
}
