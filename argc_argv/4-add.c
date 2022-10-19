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
	int i, sum, j = 0;
	char *ptr;

	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		for (j = 0; *ptr != '\0'; j++)
		{
			if (!(isdigit(*ptr)))
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}
		sum = sum + strtol(argv[i], NULL, 10);
	}
	printf("%d\n", sum);
	return (0);
}
