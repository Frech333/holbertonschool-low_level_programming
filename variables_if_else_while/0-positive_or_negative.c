#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    
// Generate a random number and assign it to n
srand(time(NULL));
n = rand() % RAND_MAX;    
printf("The number is %d\n", n);    
if (n > 0) {
printf("is positive\n");
} else if (n < 0) {
printf("is negative\n");
} else {
printf("is zero\n");
}    
printf("\n");
return 0;
}
