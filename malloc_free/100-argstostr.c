#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: integer
 * @av: pointer
 *
 * Return: pointer or NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int size = ac;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}
	}
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
