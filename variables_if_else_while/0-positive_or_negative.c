#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

/* Initialize random seed */
srand(time(NULL));
/* Generate a random number between -100 and 100 */
n = rand() % 201 - 100;
/* Print the number */
printf("%d is ", n);
/* Check if the number is positive, zero, or negative */
if (n > 0)
{
printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else
{
printf("negative\n");
}
return 0;
}
