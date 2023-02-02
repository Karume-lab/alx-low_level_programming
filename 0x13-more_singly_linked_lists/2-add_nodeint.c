#include "lists.h"

/**
 * add_nodeint -  Adds a node to the end of the linked list.
 * @head: head of the linked list.
 * @n: data to be placed in the new list.
 *
 * Return: pointer to newly created node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	if (head == NULL)
		return (NULL);
	listint_t *ptr = (listint_t *)malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
		ptr->next = NULL;
		return (ptr);
	}
	ptr->next = head;
	*head = ptr;

	return (ptr);
}

