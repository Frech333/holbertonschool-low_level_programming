#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This struct contains information about a dog,
 * including its name, age, and owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * Dog - Typedef for struct dog.
 */
typedef struct dog Dog;

#endif /* DOG_H */
