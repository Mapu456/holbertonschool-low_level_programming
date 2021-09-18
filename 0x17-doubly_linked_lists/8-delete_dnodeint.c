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
	dlistint_t *delete_node = *head;
	unsigned int count = 0;

	if (!head)
	{
		return (NULL);
	}
	if (index == 0)
	{
		(*head)->next = NULL;
		(*head)->next->prev = NULL;
		*head = delete_node->next;
		free(delete_node);
	}
	while (current)
	{
		if (count == index)
		{
			current->prev->prev->next = current;
			current->prev = current->prev->prev;
			delete_node2->next = NULL;
			delete_node2->prev = NULL;
			free(delete_node2);
			return (1);
		}
		return (-1);
	}
