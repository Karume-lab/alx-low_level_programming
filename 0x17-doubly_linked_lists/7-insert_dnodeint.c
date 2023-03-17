#include "lists.h"
/**
 * insert_dnodeint_at_index - Adds a new node at a specific index
 * @h: A pointer to the first node
 * @idx: The index where the node is to be inserted
 * @n: The element to be added
 * Return: A pointer to the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *trav = *h;
	unsigned int i = 0, j = 0;

	if (h == NULL)
		return (NULL);

	if (*h == NULL)
		return (add_dnodeint(h, n));

	newNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	while (trav->next)
		j++;
	if (idx > j)
		return (add_dnodeint_end(h, n));

	newNode->n = n;

	while (i <= (idx - 1))
	{
		trav = trav->next;
		i++;
	}

	trav->next = newNode;
	newNode->prev = trav;
	trav = trav->next;
	newNode->next = trav;
	trav->prev = newNode;

	return (newNode);
}
