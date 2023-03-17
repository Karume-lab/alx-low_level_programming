#include "lists.h"
/**
 * free_dlistint - Frees a list from memory
 * @head: A pointer to the first node
 * Return: Void(nothing)
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *trav = NULL;

	if (head == NULL)
		return;

	trav = head;
	while (trav)
	{
		head = trav->next;
		free(trav);
		trav = head;
	}
}
