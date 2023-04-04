#include "lists.h"

/**
 * free_listint2 - frees memory allocated to listint_t
 * @head: pointer of pointer to listint_t
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	else
	{
		while (*head)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
	}
	head = NULL;
}
