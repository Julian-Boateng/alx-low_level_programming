#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at a given possition
 * @head: pointer to pointer to nodes
 * @idx: index of nodes
 * @n: data (n)
 *
 * Return: on success address of new node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newHead, *dup = *head;
	unsigned int count;

	newHead = malloc(sizeof(listint_t));
	if (newHead == NULL)
		return (NULL);

	newHead->n = n;

	if (idx == 0)
	{
		newHead->next = dup;
		*head = newHead;
		return (newHead);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (dup == NULL || dup->next == NULL)
			return (NULL);
		dup = dup->next;
	}

	newHead->next = dup->next;
	dup->next = newHead;

	return (newHead);
}
