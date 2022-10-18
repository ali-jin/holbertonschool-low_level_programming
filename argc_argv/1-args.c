#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: Integer
 * @argv: Pointer
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		argv++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
