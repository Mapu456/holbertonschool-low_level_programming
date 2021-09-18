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
	dlistint_t *delete_node2 = current->prev;
	dlistint_t *delete_node = current->next;
	unsigned int count = 0;

	if (index == 0)
	{
		*head = delete_node->next;
		free(delete_node);
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
				delete_node2->prev->next = current;
				current->prev = delete_node2->prev->next;
				free(delete_node2);
				return (1);
			}
		}
	}
	return (-1);
}
