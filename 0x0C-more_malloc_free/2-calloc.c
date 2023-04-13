#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: the number of elements to allocate
 * @size: the size of each element in bytes
 *
 * Return: a pointer to the allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(c) + i) = 0;
	}

	return (c);
}
