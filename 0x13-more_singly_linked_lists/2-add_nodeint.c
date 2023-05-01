#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: Pointer to the head of the list
 * @n: Value to be added to the new node
 *
 * Return: Pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);


	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
