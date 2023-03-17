#include "lists.h"
/**
 * print_dlistint - Prints the elements in the linked list
 * @h: A pointer to the first node
 * Return: The number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (num);
	num += 1;
	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
