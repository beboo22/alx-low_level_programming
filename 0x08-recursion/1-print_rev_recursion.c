#include "main.h"

/**
 * _print_rev_recursion - reverse
 * @s: pointer to string params
 *
 */

void _print_rev_recursion(char *x)
{
	if (*x)
	{
		_print_rev_recursion(x + 1);
		putchar(*x);
	}
}
