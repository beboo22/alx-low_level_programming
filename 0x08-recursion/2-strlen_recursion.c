#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *x)
{
	if (!*x)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
