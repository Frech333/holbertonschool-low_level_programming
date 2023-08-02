#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Integer value to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int count = 0;

/* Check if the head is NULL and the index is 0 */
if (h == NULL && idx != 0) {
return (NULL); /* Cannot insert at the given index */
}

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL); /* Allocation failed */
}

/* Initialize the new node */
new_node->n = n;

/* If the list is empty, make the new node the head */
if (*h == NULL)
{
new_node->prev = NULL;
new_node->next = NULL;
*h = new_node;
return (new_node);
}

current = *h;
while (current != NULL)
{
/* Insert the new node when the desired index is reached */
if (count == idx) {
new_node->prev = current->prev;
new_node->next = current;
if (current->prev != NULL)
{
current->prev->next = new_node;
}
else
{
*h = new_node; /* Update head if insertion is at the beginning */
}
current->prev = new_node;
return (new_node);
}
current = current->next;
count++;
}

/* The desired index is out of range */
free(new_node); /* Free the allocated memory */
return (NULL);
}
