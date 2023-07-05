#include "main.h"
#include <stdio.h>

int wildcmp(char *s1, char *s2);

/**
 * wildcmp - Compares two strings and checks for wildcards
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string with wildcard character '*'
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		  return (wildcmp(s1, s2 + 1));

		if (wildcmp(s1, s2 + 1))
		  return (1);

		return (*s1 != '\0' && wildcmp(s1 + 1, s2));
	}

	if (*s1 != '\0' && (*s1 == *s2))
	  return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
