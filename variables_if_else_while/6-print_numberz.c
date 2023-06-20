#include <unistd.h>

/**                                                                                                    
 * main - Entry point of the program                                                                   
 *                                                                                                     
 * Return: Always 0                                                                                    
 */
int main(void)
{
        int num;
        char digit;

        for (num = 0; num < 10; num++)
        {
                digit = '0' + num; // Convert num to character representation
                write(1, &digit, 1);
        }
        write(1, "\n", 1);

        return (0);
}
