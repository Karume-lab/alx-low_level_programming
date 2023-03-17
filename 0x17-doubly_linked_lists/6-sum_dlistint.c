#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *trav = head;
	int sum = 0;
	
	if (head == NULL)
		return (sum);

	while (trav)
	{
		sum += trav->n;
		trav = trav->next;
	}

	return (sum);
}
