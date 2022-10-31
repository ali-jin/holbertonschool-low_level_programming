#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print
 * @d: struct pointer
 *
 * Description: print struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");

	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
