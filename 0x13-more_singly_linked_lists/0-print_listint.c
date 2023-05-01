#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a singly linked list of integers
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int count = 0;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
