#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 * Return: void
 **/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				ptr = ht->array[i];
				free(ptr->key);
				free(ptr->value);
				free(ptr);
				ht->array[i] = ht->array[i]->next;
			}
			free(ht->array[i]);
		}
	}
	free(ht);
}
