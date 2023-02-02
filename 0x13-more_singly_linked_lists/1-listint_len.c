#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: list to print
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);
	for (; h; i++)
	{
		h = h->next;
	}

	return (i);
}

