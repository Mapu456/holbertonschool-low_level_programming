#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - function that free the code
 * @head: node
 * @str: string
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;
	list_t *final;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head != NULL)
	{
		final = *head;

		while (final->next != NULL)
		{
			final = final->next;
		}
		final->next = new_node;
		return (final->next);
	}
	*head = new_node;
	return (*head);
}
