#include "hash_tables.h"

/**
 * key_index - Hashes a key and returns the corret
 *
 * @key: Pointer to an array of unsigned characters representing the key
 * @size: The size of the hash table
 *
 * Return: The index in the hash table where the key-value pair will be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
