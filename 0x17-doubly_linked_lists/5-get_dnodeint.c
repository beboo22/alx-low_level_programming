#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a given index in a linked list
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve
 *
 * Return: pointer to index, or NULL if the index is out of range
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);

	for (count = 0; head != NULL && count <= index; count++)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
	}

	return (NULL);
}
