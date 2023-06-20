#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar(i + '0'); /* Print digits 0-9 */
		else
			putchar(i + 'a' - 10); /* Print lowercase letters a-f */
	}

	putchar('\n');

	return (0);
}
