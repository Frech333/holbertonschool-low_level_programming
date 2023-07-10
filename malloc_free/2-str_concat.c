#include <stdlib.h>
#include "main.h"
#include <stdio.h>

char *_str_concat(char *s1, char *s2);

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
int len1 = 0, len2 = 0, i = 0, j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

concatenated = malloc((len1 + len2 + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);

while (i < len1)
{
concatenated[i] = s1[i];
i++;
}

while (j < len2)
{
concatenated[i] = s2[j];
i++;
j++;
}

concatenated[i] = '\0';
return (concatenated);
}
