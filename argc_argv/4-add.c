#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int i, sum = 0;
	char *ptr;

	i = 1;
	while (i < argc)
	{
		ptr = argv[i];
		while (*ptr != '\0')
		{
			if (!(isdigit(*ptr)))
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}
		sum = sum + strtol(argv[i], NULL, 10);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
