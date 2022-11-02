#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: array of size argc
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	op_t operation;
	char op = *(argv[2]);
	int sum;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((op == '%' || op == '/') && !(atoi(argv[3])))
	{
		printf("Error\n");
		exit(100);
	}
	operation.f = get_op_func(&op);
	if (operation.f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	sum = operation.f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", sum);
	return (0);
}
