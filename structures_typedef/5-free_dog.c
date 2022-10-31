#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free
 * @d: struct pointer
 *
 * Description: frees dogs
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
