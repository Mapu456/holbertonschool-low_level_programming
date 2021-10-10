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
	hash_node_t *new_node;
	hash_node_t *temp;
	int index;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
	{
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		temp = ht->array[index];
		while (temp->next)
		{
			if (temp->key == key)
			{
				free(tem->value);
				temp->value = strdup(value);
				if (!temp->value || !temp->key);
					return (0);
				return (1);
			}
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (1);
}
