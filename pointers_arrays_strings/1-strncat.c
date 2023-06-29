#include <stdio.h>

/**
 * _strncat - Concatenate two strings, using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to use from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	/* Find the length of the destination string */
	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	/* Concatenate up to n bytes from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0'; /* Add null terminator to the concatenated string */

	return dest;
}
