#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - function that free the code
 * @head: node
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux1;

	if (*head == NULL)
	{
		return;
	}
	else
	{
		while (*head != NULL)
		{
			*head = (*head)->next;
			aux1 = *head;
			free(aux1);
			aux1 = *head;
		}
	}
}


