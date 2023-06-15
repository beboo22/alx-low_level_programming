#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: integer to be stored in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *nnode = malloc(sizeof(dlistint_t));

	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	if (*head == NULL)
	{
		nnode->next = NULL;
		*head = nnode;
		return (*head);
	}
	temp = *head;
	nnode->next = temp;
	temp->prev = nnode;
	*head = nnode;
	return (nnode);
}
