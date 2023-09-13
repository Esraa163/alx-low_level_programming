#include "main.h"

/**
 * print_times_table - prints time taple of n
 * @n: takes number input
*/

void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n >= 0)
		for (a = 0; a <= n; a++)
		{
			printf(0);
			for (b = 1; b <= n; ++b)
			{
				printf(",");
				printf(" ");

				c = a * b;
				printf("%d", c);
			}
			printf("\n");
		}
}
