#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
  * hash_table_delete - gives the value of a node
  * @ht: the key of the hash
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temp1;
	unsigned int index = 0;

	temp = ht->array[index];

	temp1 = temp;

	if (ht == NULL)
		return;

	for (; index < ht->size; index++)
	{
		while (temp != NULL)
		{
			temp1 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp1;
		}
	}
	free(ht->array);
	free(ht);
}
