#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - function to return i
 * @head: the first in the head
 * @idex: the first in the head
 * Return: i the number of h elements
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *delete_node;
	unsigned int count = 0;

	if (index == 0)
	{
		delete_node = *head;
		current = delete_node->next;
		free(delete_node);
		current->prev = NULL;
		*head = current;
		return (1);
	}
	if (*head == NULL)
	{
		return (-1);
	}
	else
	{
		while (current)
		{
			if (count == index)
			{
				delete_node = current->next;
				current->next = delete_node->next;
				free(delete_node);
				return (1);
			}
			if (current->next != NULL)
			{
				current = current->next;
			}
		}
	}
	return (-1);
}
