#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters initialized with a specific
 * character
 * @size: The size of the array
 * @c: The character to initialize the array with
 *
 * Return: On success, a pointer to the newly created array.
 *         On failure, returns NULL.
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = (char *)malloc(sizeof(char) * size);

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
