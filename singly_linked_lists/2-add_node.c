#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the pointer to the head of the linked list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
int length = 0;

temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);

while (str[length]);
length++;

temp->len = length;
temp->str = strdup(str);
temp->next = *head;
*head = temp;
return (temp);
}
