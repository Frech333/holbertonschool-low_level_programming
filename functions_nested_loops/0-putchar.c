#include <unistd.h>

/**                                                                                                    
 * main - Entry point of the program                                                                   
 *                                                                                                     
 * Return: Always 0                                                                                    
 */
int main(void)
{
        char c = '_';

        write(1, &c, 1);
        write(1, "p", 1);
        write(1, "u", 1);
        write(1, "t", 1);
        write(1, "c", 1);
        write(1, "h", 1);
        write(1, "a", 1);
        write(1, "r", 1);
        write(1, "\n", 1);

        return (0);
}
