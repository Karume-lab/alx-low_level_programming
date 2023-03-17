#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *trav = head;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		trav = trav->next;
		i++;
	}

	return (trav);
}