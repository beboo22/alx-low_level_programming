#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t list_len(const list_t *h)
{
	list_t *ptr;
	int n = 0;

	ptr = (list_t *)h;

	while (ptr)
	{
		n++;
		ptr = ptr->next;
	}

	return (n);
}
