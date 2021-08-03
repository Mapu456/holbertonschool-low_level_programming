#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function to sum
 * @head: the first node
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
