#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *dadd_nodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
