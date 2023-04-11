#include "main.h"

#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *n,unsigned int i;

	n = malloc(sizeof(char) * size);

	if (size == 0 || n == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		n[i] = c;

	return (n);
}
