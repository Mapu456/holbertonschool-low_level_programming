#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function to sum
 * @head: the first node
 * @idx: the number that determine which is the n to prints
 * @n: the value of each node
 * Return: head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL || head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = (*head);
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (i = 0; i < (idx - 1) && temp->next; i++)
	{
		temp = temp->next;
	}
	if (i < (idx - 1))
		return (NULL);
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
