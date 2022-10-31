#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - print
 * @d: struct pointer
 *
 * Description: print struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Dog;

	Dog = malloc(sizeof(dog_t));
	if (Dog == NULL)
		free(Dog);
		return (NULL);
	Dog->name = name;
	Dog->age = age;
	Dog->owner = owner;
	return (Dog);
}
