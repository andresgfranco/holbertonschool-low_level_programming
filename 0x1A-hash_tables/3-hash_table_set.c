#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element
 * to the hash table
 * @ht: hash table you want to add
 * @key: key. Can not be an empty string
 * @value: value associated with the key. value must
 * be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	int new_node;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = add_new_node(&(ht)->array[index], key, value);
	return (new_node);
}

/**
 * add_new_node - function that adds a new node
 * to the array[index]
 * @array: array[index]
 * @key: the key to add
 * @value: value of the key to add or overwrite
 * Return: 0 if failed 1 if succeded
**/
int add_new_node(hash_node_t **array, const char *key, const char *value)
{
	hash_node_t *temp_existing_key = *array, *new_node;
	unsigned long int i; /*iterator*/

	for (i = 0; temp_existing_key; i++)
	{
		if (strcmp(key, temp_existing_key->key) == 0)
		{
			free(temp_existing_key->value);
			temp_existing_key->value = strdup(value);
			return (1);
		}
		temp_existing_key = temp_existing_key->next;
	}
	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = (*array);
	(*array) = new_node;
	return (1);
}
