#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j, nb;

	while (i < 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			if (j != i)
			{
				putchar('0' + i);
				putchar('0' + j);
				nb = i + j;
				if (nb != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
