#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Entry point
 * @c: digit
 * @s: pointer
 *
 * Return: 1 or 0 (Success)
 */
int _isdigit(int c, char *s)
{
	int i, res;

	for (i = 0; i < c; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			res = 1;
		else
			res = 0;
	}
	if (res == 1)
		return (1);
	else
		return (0);
}

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
