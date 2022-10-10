#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - Entry point
 * @s: string
 *
 */
void rev_string(char *s)
{
	int i, j;
	int n = strlen(s);

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		char ch = s[i];

		s[i] = s[j];
		s[j] = ch;
	}
}
