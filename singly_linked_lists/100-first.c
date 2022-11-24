#include "lists.h"

void Hare_Tortoise(void) __attribute__ ((constructor));

/**
 * Hare_Tortoise - Print before main function
 */
void Hare_Tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
