#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current, *next;

current = head;
while (current != NULL)
{
next = current->next; /* Save the next node before freeing the current one */
free(current); /* Free the current node */
current = next; /* Move to the next node */
}
}
