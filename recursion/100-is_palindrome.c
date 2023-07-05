#include "main.h"
#include <stdio.h>

int is_palindrome(char *s);

/**
 * get_str_length - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the string
 */
int get_str_length(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to the string
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int length = get_str_length(s);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		if (s[start] != s[end])
		  return (0);

		start++;
		end--;
	}

	return (1);
}
