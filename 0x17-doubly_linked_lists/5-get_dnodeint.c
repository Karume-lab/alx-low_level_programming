#include "lists.h"
/**
 *  get_dnodeint_at_index- Retrieve a value at given index
 * @head: A pointer to the first node
 * @index: The index of where the element is
 * Return: A pointer to the node being looked for
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *trav = head;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (trav->next)
		{
			trav = trav->next;
			i++;
		}
		else
			return (NULL);
	}

	return (trav);
}
