#include "lists.h"

/**
 * reverse_listint - reverses a linked list of integers
 * @head: double pointer to head of list
 *
 * Return: pointer to new head of list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *tmp2 = NULL;

	while (*head)
	{
		tmp = (*head)->next;
		(*head)->next = tmp2;
		tmp2 = *head;
		*head = tmp;
	}

	*head = tmp2;

	return (*head);
}
