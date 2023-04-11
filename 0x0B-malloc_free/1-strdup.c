#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *c;
	unsigned int z = 0;
	unsigned int i = 0;

	if (c == 0 || str == NULL)
		return (NULL);

	for ( ; str[z] != '\0'; z++)
		;

	c = malloc((z * sizeof(*str)) + 1);

	for ( ; i < z; i++)
		c[i] = str[i];


	return (c);
}
