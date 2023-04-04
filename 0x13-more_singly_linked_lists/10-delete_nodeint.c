#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to pointer
 * @index: node indext
 *
 * Return: on success 1 else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *dup = *head;
	unsigned int count;

	if (dup == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(dup);
		return (1);
	}

	for (count = 0; count < (index - 1); count++)
	{
		if (dup->next == NULL)
			return (-1);

		dup = dup->next;
	}

	temp = dup->next;
	dup->next = temp->next;
	free(temp);
	return (1);
}
