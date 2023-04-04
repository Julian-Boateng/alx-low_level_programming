#include "lists.h"
#include <stdio.h>


/**
 * print_listint - prints every elements of the listint_t list.
 * @h: lisint_t pointer
 * Return: all numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
	printf("%d\n", h->n);
	h = h->next;
	}
	return (i);
}
