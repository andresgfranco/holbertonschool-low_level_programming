#include "hash_tables.h"
/*
 * hash_table_create - function that creates a hash table
 * @size: is the size of the array
 * Return: pointer to the newly creted hash table
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table =
		(hash_table_t *)malloc(size * sizeof(unsigned long int));

	if (new_hash_table == NULL)
	{
		return (NULL);
	}

	return (new_hash_table);
}
