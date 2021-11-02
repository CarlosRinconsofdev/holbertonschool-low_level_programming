#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
 * Return: no
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
