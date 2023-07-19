#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *my_dog) {
    printf("Name: %s\n", my_dog->name);
    printf("Age: %.1f\n", my_dog->age);
    printf("Owner: %s\n", my_dog->owner);
}

int main() {
    // Create a dog instance
    struct dog my_dog;
    my_dog.name = "Buddy";
    my_dog.age = 3.5;
    my_dog.owner = "John";

    // Print dog information
    print_dog(&my_dog);

    return (0);
}
