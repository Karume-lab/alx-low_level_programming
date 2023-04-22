#include "lists.h"

/**
 * add_nodeint_end -  Adds a node to the end of the linked list.
 * @head: head of the linked list.
 * @n: data to be placed in the new list.
 *
 * Return: pointer to newly created node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (ptr == NULL)
		return (ptr);
	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		ptr->n = n;
		*head = ptr;
		ptr->next = NULL;
		return (ptr);
	}
	while (temp->next != NULL)
		temp = temp->next;
	ptr->n = n;
	temp->next = ptr;
	ptr->next = NULL;

	return (ptr);
}

