#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
  * hash_table_get - gives the value of a node
  * @ht: the key of the hash
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index] != NULL)
		{
			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			if (ht->array[index]->next)
				printf(", ");
			ht->array[index] = ht->array[index]->next;
		}
	}
	printf("}\n");
}
