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
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;
	if (temp == NULL)
	{
		/*si el node se va poner al final todos los nodos*/
		temp = new_node;
	}
	else
	{
		/*recorra siempre y cuando el nodo este lleno*/
		while (temp != NULL)
		{
			/*recorra los nodos verificando si el temp->key == key*/
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		/*recorrio todo y el key no esta en los nodos*/
		/*entonces, agregue el nuevo nodo en la mitad*/
		new_node->next = temp;
		temp = new_node;
	}
	return (1);
}
