#include "main.h"
#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to calculate the factorial for
 *
 * Return: The factorial of the given number, or -1 if an error occurs
 */
int factorial(int n)
{
  int result = 1;
  int i;

  if (n < 0)
    return -1;

  if (n == 0)
    return 1;

  for (i = 1; i <= n; i++)
  {
    result *= i;
  }

  return result;
}
