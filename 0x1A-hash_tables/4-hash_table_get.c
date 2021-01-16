#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value
 * associated with a key
 * @ht: hash table
 * @key: key to look up
 * Return: value associated with the key
 * or NULL if key couldn't be found
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp = NULL;
	unsigned long int i, index;

	if (strcmp(key, "") == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	for (i = 0; temp; i++)
	{
		if (strcmp(key, temp->key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
