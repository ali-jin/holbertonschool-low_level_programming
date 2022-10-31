#include "dog.h"
#include <stdio.h>

/**
 * init_dog - informations of the dog
 * @d: struct
 * @name: name of the dog - char *
 * @age: age of the dog - float
 * @owner: owner of the dog - char *
 *
 * Description: initialize a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
