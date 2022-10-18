#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: Integer
 * @argv: Pointer
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *p;
	int i, sum = 0;
	int a;

	if (argc == 1)
		return (sum);

	for (i = 1; i < argc; i++)
	{
		a = strtol(argv[i], &p, 10);
		if (isdigit(a))
			sum += a;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
