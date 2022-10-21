#include <stdio.h>
#include "main.h"

/**
 * fibonacci - Entry point
 *
 */
int main(void)
{
	long nb1, nb2 = 1;
	int i;
	long temp;

	for (i = 0; i < 50; i++)
	{
		temp = nb1;
		nb1 += nb2;
		printf("%ld", nb1);
		nb2 = temp;
		if (i < 49)
			printf(", ");
	}
	printf("\n");
}
