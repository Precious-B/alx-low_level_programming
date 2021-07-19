#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 *
 * @d: a pointer to struct dog
 *
 * @name: a pointer to intialize the variable name
 *
 * @age: a variable to be initialized
 *
 * @owner: a pointer to initialize the variable owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
d->name = name;
d->age = age;
d->owner = owner;
}
