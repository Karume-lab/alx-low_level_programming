#include "lists.h"

/**
 * free_listint -  frees a linked list.
 * @head: head of the linked list.
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *pNext = head->next;

	if (head == NULL)
		return;


	while (head)
	{
		free(head);
		head = pNext;
		pNext = pNext->next;
	}
	free(head);
}

