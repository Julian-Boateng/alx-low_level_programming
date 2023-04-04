#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of listint_t
 * @head: pointer to node
 * @n: data of node
 *
 * Return: on success address of new node else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;


	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}


	return (*head);
}
