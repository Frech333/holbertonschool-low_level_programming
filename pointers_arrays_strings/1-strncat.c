#include "main.h"

/**
* _strncat - concatenates two strings, using at most n bytes from src
* @dest: destination string
* @src: source string
* @n: maximum number of bytes to be used from src
*
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
int dest_len = 0;
while (*ptr)
{
ptr++;
dest_len++;
}
while (*src && n > 0)
{
*ptr = *src;
ptr++;
src++;
dest_len++;
n--;
}
if (n == 0)
*ptr = '\0';
else
ptr = '\0';
return (dest);
}
