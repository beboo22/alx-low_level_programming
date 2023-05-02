#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position in a linked list.
 *
 * @head: pointer to a pointer to the head of the linked list.
 * @index: index of the node to delete.
 *
 * Return: 1 if the node was successfully deleted, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}

	tmp = *head;
	for (i = 0; tmp && i < index - 1; i++)
		tmp = tmp->next;

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	ptr = tmp->next;
	tmp->next = ptr->next;
	free(ptr);
	return (1);
}
