#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to a char.
 * @to: Pointer to a char containing the new value.
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
