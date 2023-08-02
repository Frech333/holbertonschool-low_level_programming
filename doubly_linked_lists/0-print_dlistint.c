#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: the head of the doubly linked list to print
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}

return (num);
}
