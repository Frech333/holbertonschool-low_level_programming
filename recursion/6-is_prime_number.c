#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - Checks if a number is prime recursively
 * @n: The number to check
 * @divisor: The current divisor to test
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor <= 1)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, n - 1));
}
