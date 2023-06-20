#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase, then uppercase,
 *              using putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;
	char uppercase;

	/* Print lowercase alphabet */
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);

	/* Print uppercase alphabet */
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		putchar(uppercase);

	putchar('\n');

	return (0);
}
