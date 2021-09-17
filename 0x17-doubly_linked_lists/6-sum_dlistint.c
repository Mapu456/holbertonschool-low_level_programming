#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - function to return i
 * @head: the first in the head
 * Return: i the number of h elements
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	int sum = 0;

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
