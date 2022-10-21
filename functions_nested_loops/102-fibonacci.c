#include <stdio.h>
#include "main.h"

/**
 * fibonacci - Entry point
 *
 */
void fibonacci(void)
{
	long nb1, nb2 = 1;
	int i = 0;
	long temp;

	while (i < 50)
	{
		temp = nb1;
		nb1 += nb2;
		printf("%ld", nb1);
		nb2 = temp;
		if (i < 49)
			printf(", ");
		i++;
	}
	printf("\n");
}

int main(void)
{
	fibonacci();
	return (0);
}