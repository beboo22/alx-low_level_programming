#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new  position ina doubly linked list
 * @h: double pointer to the head of the list
 * @idx: index at which to insert the new node
 * @n: integer value to store in the new node
 *
 * Return: pointer to the new node, range or allocation fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *nnode = malloc(sizeof(dlistint_t));
	unsigned int cnt;

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;

	if (idx == 0)
	{
		nnode = add_dnodeint(h, n);
		return (nnode);
	}

	cnt = 0;
	temp = *h;
	while (cnt <= idx)
	{
		if (temp->next == NULL && cnt == idx - 1)
		{
			nnode = add_dnodeint_end(h, n);
			return (nnode);
		}
		if (cnt == (idx - 1))
		{
			nnode->prev = temp;
			nnode->next = temp->next;
			temp->next->prev = nnode;
			temp->next = nnode;
			return (nnode);
		}
		temp = temp->next;
		cnt++;
	}

	free(nnode);
	return (NULL);
}
