#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
  * hash_table_delete - gives the value of a temp
  * @ht: the key of the hash
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temp1;
	unsigned int index;

	index = 0;

	temp = ht->array[index];

	temp1 = temp;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
		/* save the next to temp1 ptr*/
			temp1 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		/* reassign temp1 to the temp */
			temp = temp1;
		}
	index++;
	}
	free(ht->array);
	free(ht);
}
