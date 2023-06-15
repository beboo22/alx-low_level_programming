#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: double pointer to the head of the list
 * @n: integer value to store in the new node
 *
 * Return: pointer to the new node, or NULL if allocation fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp1, *nnode = malloc(sizeof(dlistint_t));

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;

	if (*head == NULL)
	{
		nnode->prev = NULL;
		*head = nnode;
		return (nnode);
	}

	temp1 = *head;
	while (temp1->next != NULL)
		temp1 = temp1->next;

	nnode->prev = temp1;
	temp1->next = nnode;

	return (nnode);
}
