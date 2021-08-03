#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function to sum
 * @head: the first node
 * @index: the number that determine which is the n to prints
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head->next == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			head = head->next;
		}
	}
	return (head);
}
