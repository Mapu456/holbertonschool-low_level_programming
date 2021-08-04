#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Entry Point
 * @head: head
 * @index: index
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *other;
	listint_t *temp;

	other = *head;

	if (index == 0)
	{
		temp = other->next;
		free(other);
		*head = temp;
		return (1);
	}
	if (*head == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			if (i + 1 == index)
			{
				temp = other->next;
				other->next = temp->next;
				free(temp);
				return (1);
			}
			if (other->next != NULL)
			{
				other = other->next;
			}
		}
	}
	return (-1);
}

