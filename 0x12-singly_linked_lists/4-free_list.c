#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - function that free the code
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	free(head->str);
	free(head);
}
