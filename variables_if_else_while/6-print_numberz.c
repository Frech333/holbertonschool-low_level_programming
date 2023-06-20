#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		write(1, &num, 1);
	}
	write(1, "\n", 1);

	return (0);
}
