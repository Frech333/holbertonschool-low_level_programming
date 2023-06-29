#include "main.h"
#include <stddef.h> /* Include <stddef.h> for NULL definition */

/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

if (*needle == '\0')
return (haystack);

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; haystack[i + j] == needle[j]; j++)
{
if (needle[j + 1] == '\0')
return (&haystack[i]);
}
}

/* Substring not found, return NULL */
return (NULL);
}
