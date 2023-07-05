#include "main.h"
#include <stdio.h>

int is_palindrome(char *s);

/**
 * is_palindrome_recursive - Recursive helper function for is_palindrome
 * @s: Pointer to the string
 * @start: Start index of the current substring
 * @end: End index of the current substring
 *
 * Return: 1 if the substring is a palindrome, otherwise 0
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	  return (1);

	if (s[start] != s[end])
	  return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * get_str_length - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the string
 */
int get_str_length(char *s)
{
	if (*s == '\0')
	  return (0);

	return (1 + get_str_length(s + 1));
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
	return (is_palindrome_recursive(s, 0, length - 1));
}
