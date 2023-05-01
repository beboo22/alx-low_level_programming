#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	ptr = h;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
