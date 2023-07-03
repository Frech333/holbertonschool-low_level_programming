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
if (n < 0)
return -1;

if (n == 0)
return 1;

return n * factorial(n - 1);
}
