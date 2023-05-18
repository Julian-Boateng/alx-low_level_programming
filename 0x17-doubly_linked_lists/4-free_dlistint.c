#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = NULL;

	while (head != NULL)
	{
		cur = head;
		head = head->next;
		free(cur);
	}
}
