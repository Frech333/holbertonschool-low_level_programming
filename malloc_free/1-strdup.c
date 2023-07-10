#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
