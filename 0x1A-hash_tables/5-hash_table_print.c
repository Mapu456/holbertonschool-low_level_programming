#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
  * hash_table_print - gives the value of a node
  * @ht: the key of the hash
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int index = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (temp->next)
				printf(", ");
			temp = temp->next;
		}
	}
	printf("}\n");
}
