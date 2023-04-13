#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocate memory block
 * @ptr: Pointer to the memory block to reallocate
 * @old_size: Size of the old memory block in bytes
 * @new_size: Size of the new memory block in bytes
 *
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (old_size < new_size)
	{
		memcpy(new_ptr, ptr, old_size);
	}
	else
	{
		memcpy(new_ptr, ptr, new_size);
	}

	free(ptr);
	return (new_ptr);
}
