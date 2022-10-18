#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
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
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
