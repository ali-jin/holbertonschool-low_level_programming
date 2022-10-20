#include <stdio.h>
#include "main.h"

/**
 * fibonacci - Entry point
 *
 */
void fibonacci(void)
{
	int nb1, nb2 = 1;
	int i, temp;

	for (i = 0; i < 50; i++)
	{
		temp = nb1;
		nb1 += nb2;
		printf("%d", nb1);
		nb2 = temp;
		if (i < 49)
			printf(", ");
	}
	printf("\n");
}
