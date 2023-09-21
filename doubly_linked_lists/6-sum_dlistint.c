#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) in a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all data in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int sum = 0;

while (current != NULL)
{
sum += current->n; /* Add the data of the current node to the sum */
current = current->next;
}

return (sum);
}
