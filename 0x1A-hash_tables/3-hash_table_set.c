#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
  * hash_table_set - gives the index of a key
  * @ht: the key of the hash
  * @key: the size of the array
  * @value: the size of the array
  * Return: the index at which the key/value pair is stored in
  * the array of the hash table
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t new_node;

	if (!key || key == NULL)
	{
		return (0)
	}
	if (ht == NULL || ht->size == 0)
	{
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return(0);
	}
	return (1);
}