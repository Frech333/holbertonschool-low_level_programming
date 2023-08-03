#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at the specified index of a
 *                            doubly linked list.
 * @head: A pointer to a pointer to the first node of the list.
 * @index: The index of the node to be deleted. Index starts from 0.
 *
 * Return: 1 if deletion is successful, -1 if it fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    if (*head == NULL)
        return (-1);

    unsigned int i;
    dlistint_t *current, *temp;

    current = *head;
    temp = NULL;

    for (i = 0; current != NULL && i < index; i++)
    {
        temp = current;
        current = current->next;
    }

    if (i < index)
        return (-1);

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    temp->next = current->next;
    if (current->next != NULL)
        current->next->prev = temp;
    free(current);

    return (1);
}
