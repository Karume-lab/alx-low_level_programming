#include "lists.h"
/**
 * insert_dnodeint_at_index - Adds a new node at a specific index
 * @h: A pointer to the first node
 * @idx: The index where the node is to be inserted
 * @n: The element to be added
 * Return: A pointer to the new node
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *trav = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = trav->next;
		if (trav->next != NULL)
			(*head)->prev = NULL;
		free(trav);
		return (1);
	}
	while (i < index && trav)
	{
		trav = trav->next;
		i++;
	}

	if (trav == NULL)
		return (-1);

	trav->prev->next = trav->next;
	if (trav->next != NULL)
		trav->next->prev = trav->prev;
	free(trav);
	return (1);
}
