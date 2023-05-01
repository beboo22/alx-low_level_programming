#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Removes the head node of a linked list and returns its value
 * @head: Pointer to the head of the list
 *
 * Return: Value of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL)
		return (0);

	ptr = *head;
	*head = ptr->next;
	data = ptr->n;
	free(ptr);

	return (data);
}
