#include "main.h"
#include <stdio.h>

/**
 * sqrt_helper - Calculates the square root of n using a recursive helper function
 * @n: The number to calculate the square root for
 * @guess: The current guess for the square root
 *
 * Return: The square root of n if it is a perfect square, -1 otherwise
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return guess;
	else if (guess * guess > n)
		return -1;
	else
		return sqrt_helper(n, guess + 1);
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number recursively
 * @n: The number to calculate the square root for
 *
 * Return: The square root of n if it is a perfect square, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	else
		return sqrt_helper(n, 0);
}
