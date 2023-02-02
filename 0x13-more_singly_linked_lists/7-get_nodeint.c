#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of the linked list.
 * @index: is the index of the node, starting at 0
 * Return: NULL if node doesn't exist else returns the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	tmp = head;

	for (i = 0; i < index; i++)
	{
		if (!(tmp->next))
			return (NULL);
		tmp = tmp->next;
	}

	return (tmp);
}
