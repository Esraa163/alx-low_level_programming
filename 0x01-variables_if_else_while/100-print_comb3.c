#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: print all possible different
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, k;

	for (i = 0; i <= 8; i++)
	{
		for (k = 1; k <= 9; k++)
		{
			if (i != k && i < k)
			{
				putchar(i + 48);
				putchar(k + 48);
				if (i + k != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

