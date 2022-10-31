#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print
 * @d: struct pointer
 *
 * Description: print struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
		exit(EXIT_SUCCESS);
	}

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
	return (EXIT_SUCCESS);
}
