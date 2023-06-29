#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *
 * an inputted number of butes from src.
 *
 * @dest: The string to be appended upon.
 *
 * @src: The string to be appended to dets.
 *
 * @n: The number of bytes fro src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *strncat(char *dest, char *src, int n)

{

  int index = 0, dest_len = 0;

  while (dest[index++])
    dest_len++;
  for (index = 0; src[index] && index <; index++)
    dest[dest_len++] = src[index];
  return (dest);
}
