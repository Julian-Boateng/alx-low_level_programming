#include "lists.h"

/**
 * free_listint - frees the memory allocated to listint_t
 * @head: pointer to listint_t
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
