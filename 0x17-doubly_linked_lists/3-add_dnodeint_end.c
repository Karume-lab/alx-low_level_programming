#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end
 * @head: A pointer to the first node
 * @n: The element to be added
 * Return: A pointer to the new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *trav = *head;

	if (head == NULL)
		return (NULL);

	newNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (trav == NULL)
	{
		newNode->next = trav;
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (trav->next)
		trav = trav->next;

	newNode->prev = trav;
	trav->next = newNode;
	newNode->next = NULL;

	return (newNode);
}
