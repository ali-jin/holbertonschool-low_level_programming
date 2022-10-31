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
	if (d == NULL)
	{
		exit(EXIT_SUCCESS);
	}
	free(d->name);
	free(d->owner);
	free(d);
}
