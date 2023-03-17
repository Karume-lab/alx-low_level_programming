#include "lists.h"
/**
 * dlistint_len - Finds the number of nodes
 * @h: A pointer to the first node
 * Return: The number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	if (h == NULL)
		return (num);
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
	}
