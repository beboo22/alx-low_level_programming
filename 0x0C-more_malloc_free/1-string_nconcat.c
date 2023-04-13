#include "main.h"
#include <stdlib.h>

/**
 * _strl - returns the length of a string
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
int _strl(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * @n: the number of bytes of s2 to concatenate to s1
 *
 * Return: a pointer to the new string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	int num = n, i, j, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num > _strl(s2))
		num = _strl(s2);

	len = _strl(s1) + num + 1;
	c = malloc(sizeof(*c) * len);

	if (c == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		c[i] = s1[i];
	for (j = 0; j < num; j++)
		c[i + j] = s2[j];
	c[i + j] = '\0';
	return (c);
}
