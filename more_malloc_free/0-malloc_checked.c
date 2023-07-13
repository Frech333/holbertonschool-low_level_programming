#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @a: ther size to allocate
 *
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
