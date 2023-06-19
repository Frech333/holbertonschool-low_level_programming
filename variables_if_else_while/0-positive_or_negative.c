#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    
    srand(time(NULL));
    n = rand() % 201 - 100;  // Generate a random number between -100 and 100
    
    printf("The number is %d\n", n);
    
    if (n > 0) {
        printf("%d is positive\n", n);
    } else if (n < 0) {
        printf("%d is negative\n", n);
    } else {
        printf("%d is zero\n", n);
    }
    
    printf("\n");
    return 0;
}
