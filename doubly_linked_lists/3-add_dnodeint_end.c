#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Double pointer to the head of the list
 * @n: Integer value to store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *current;

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL); /* Allocation failed */
}

/* Initialize the new node */
new_node->n = n;
new_node->next = NULL;

/* Check if the list is empty */
if (*head == NULL)
{
/* The new node becomes the first and last node */
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

/* Traverse the list to find the last node */
current = *head;
while (current->next != NULL)
{
current = current->next;
}

/* Add the new node at the end of the list */
current->next = new_node;
new_node->prev = current;

return (new_node);
}
