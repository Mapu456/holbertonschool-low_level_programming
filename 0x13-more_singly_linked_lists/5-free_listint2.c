#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - function that free the code
 * @head: node
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux1;

	if (*head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		aux1 = (*head)->next;
		free(*head);
		*head = aux1;
	}
}
