#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: The size to allocate
 *
 * Return: Pointer to the allocated memory
 *         If malloc fails, the function terminates the program with exit status 98.
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);

if (p == NULL)
exit(98);

return (p);
}
