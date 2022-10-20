#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j, l, nb;

	while (i < 8)
	{
		j = i + 1;
		while (j <= 8)
		{
			l = j + 1;
			while (l <= 9)
			{
				if (l != i && l != j)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + l);
					nb = i + j + l;
					if (nb != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				l++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
