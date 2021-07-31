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
    list_t *final;

    while (head)
    {
        final = head->next;
        free(head->str);
        free(head);
        head = final;
    }
}

