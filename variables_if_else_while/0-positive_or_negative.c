#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program assigns a random number to the variable n
 *              and prints whether the number is positive, negative, or zero.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0)); /* Seed the random number generator with current time */

	n = rand() % 201 - 100; /* Generate a random number between -100 and 100 */

	printf("The number %d ", n);

	if (n > 0)
		printf("is positive");
	else if (n == 0)
		printf("is zero");
	else
		printf("is negative");

	printf("\n");

	return (0);
}
