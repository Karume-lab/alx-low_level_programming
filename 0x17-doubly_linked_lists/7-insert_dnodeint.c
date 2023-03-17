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
	dlistint_t *trav = *h;
	dlistint_t *ptrNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	unsigned int i;

	if (ptrNode == NULL)
		return (NULL);
	ptrNode->n = n;
	if (h == NULL)
	{
		free(ptrNode);
		return (NULL);
	}
	if (*h == NULL || idx == 0)
	{
		free(ptrNode);
		return (add_dnodeint(h, n));
	}
	for (i = 0; (i < idx - 1) && (trav); i++)
		trav = trav->next;
	if (trav == NULL)
	{
		free(ptrNode);
		return (NULL);
	}
	if (trav->next == NULL)
	{
		free(ptrNode);
		return (add_dnodeint_end(h, n));
	}
	else
	{
		trav->next->prev = ptrNode;
		ptrNode->prev = trav;
		ptrNode->next = trav->next;
		trav->next = ptrNode;
		return (ptrNode);
	}

	return (NULL);
}
