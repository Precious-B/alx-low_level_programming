#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_dog - a function that prints a struct dog
 *
 * @d: a pointer to struct dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
else if (d->name == NULL)
printf("Name: nil\n");
else if (d->owner == NULL)
printf("Owner: nil\n");
else
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
