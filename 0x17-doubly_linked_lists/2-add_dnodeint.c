#include "lists.h"
/**
 * add_dnodeint - Adds a new node
 * @head: A pointer to the first node
 * @n: The element to be added
 * Return: The number of nodes
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	if (head == NULL)
		return (NULL);

	newNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;

	if (newNode->next)
		newNode->next->prev = newNode;

	return (newNode);
}
