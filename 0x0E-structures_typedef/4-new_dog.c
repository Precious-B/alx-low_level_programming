#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: a pointer to the string that will be used in the function
 *
 * Return: to return the length of a string
 */
int _strlen(char *s)
{
int i;
for
(i = 0;
s[i] != '\0';
i++);
return (i);
}

/**
 * *_strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: character pointer
 *
 * @src: character pointer
 *
 * Return: to return dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = src[i];
return (dest);
}

/**
 * new_dog - a function that creates a new dog
 *
 * @name: name of the dog
 *
 * @age: the age of the dog
 *
 * @owner: the owner of the dog
 *
 * Return: on success, returns the valuse of the dog
 * and returns NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int length, length2;
length = _strlen(name);
length2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
dog->name = malloc(sizeof(char) * (length + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (length2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
