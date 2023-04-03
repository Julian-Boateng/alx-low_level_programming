#ifndef lists_h
#define lists_h


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**

Definition of a singly linked list node structure named listint_s.
@n: an integer value contained in the node.
@next: a pointer to the next node in the list.
Description: This structure defines a node in a singly linked list.
*/

/**

Definition of a singly linked list node structure named listint_s.
*/
typedef struct listint_s
{
int n; // integer value contained in the node.
struct listint_s *next; // pointer to the next node in the list.
} listint_t; // typedef for convenience.

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);

#endif
