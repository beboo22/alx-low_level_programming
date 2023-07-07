#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of the hash table to be created
 *
 * Return: pointer to the newly created hash table, or NULL if an error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
