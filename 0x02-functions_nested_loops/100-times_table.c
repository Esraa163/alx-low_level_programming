#include "main.h"

/**
 * print_times_table - prints time taple of n
 * @n: takes number input
*/

void print_times_table(int n)
{
	int a, b;

	if (n <= 15 && n >= 0)
		for (a = 0; a <= n; a++)
		{
			printf("%d", 0);
			for (b = 1; b <= n; ++b)
			{
				printf("%d,  ", (a * b));
			}
			printf("\n");
		}
}
