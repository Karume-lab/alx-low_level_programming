#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: list to print
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);
	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}

