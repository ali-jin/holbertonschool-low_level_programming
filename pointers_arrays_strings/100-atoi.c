#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - Entry point
 * @s: pointer
 *
 * Return: number(s) (Success)
 */
int _atoi(char *s)
{
	int sum = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -1;
			s++;
			if (*s == ' ')
				sign = 1;
		}
		if (*s >= '0' && *s <= '9')
		{
			sum = sum * 10;
			sum = sum + (*s - 48);
			s++;
			if (*s == ' ' || *s > '9' || *s < '0')
				break;
		}
		else if (*s <= '0' || *s >= '9' || *s == ' ')
			s++;
		else
			s++;
	}
	return (sign * sum);
}
