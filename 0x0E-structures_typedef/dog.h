#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a tructure of a dog
 *
 * @name: a variable for the name of the dog
 *
 * @age: a variable for the age of the dog
 *
 * @owner: a variable for the owner of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - a new name for the struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
