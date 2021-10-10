#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
  * hash_table_get - gives the value of a node
  * @ht: the key of the hash
  * @key: the size of the array
  * Return: the value associated with the element, or NULL
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	while (ht->array[index] != NULL)
	{
		if (!strcmp(ht->array[index]->key, key))
		{
			return (ht->array[index]->value);
		}
	}
	return (NULL);
}
