#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function to return i
 * @head: the first in the head
 * Return: the numbers of n
 */
int pop_listint(listint_t **head)
{
	int aux1;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		aux1 = (*head)->n;
		*head = (*head)->next;
	}
	return (aux1);
}


