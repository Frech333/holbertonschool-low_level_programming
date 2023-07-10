#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the newly allocated duplicate string,
 *         or NULL if insufficient memory is available.
 */

char *_strdup(char *str)
{
char *duplicate;
int length = 0;
int i;

if (str == NULL)
return (NULL);

/* Calculate the length of the string */
while (str[length])
length++;

/* Allocate memory for the duplicate string */
duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);

/* Copy the string */
for (i = 0; i <= length; i++)
duplicate[i] = str[i];

return (duplicate);
}
