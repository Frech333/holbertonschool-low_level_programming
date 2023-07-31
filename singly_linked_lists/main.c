#include <stdlib.h>
#include "lists.h"

int main(void)
{
    list_t *head;

    /* Sample data for testing */
    list_t hello = {NULL, NULL};
    list_t ella = {NULL, NULL};
    list_t test = {NULL, NULL};

    hello.str = "World";
    hello.next = &ella;
    ella.str = "Ella";
    ella.next = &test;
    head = &hello;

    size_t node_count = print_list(head);
    printf("Number of nodes: %lu\n", node_count);

    return (EXIT_SUCCESS);
}
