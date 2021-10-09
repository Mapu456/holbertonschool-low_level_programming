#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
	* key_index - gives the index of a key
	* @key: the key of the hash
	* @size: the size of the array
	* Return: index
	*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_num, index;

	hash_num = hash_djb2(key);
	index = hash_num % size;
	return (index);
}
