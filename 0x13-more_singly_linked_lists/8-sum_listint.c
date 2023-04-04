#include "lists.h"

/**
 * sum_listint - returns the sum of the data of a linked list
 * @head: pointer to node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
