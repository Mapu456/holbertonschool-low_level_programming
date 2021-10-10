void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temp1;
	unsigned int index;

	temp = ht->array[index];

	temp1 = temp;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			temp1 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp1;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
