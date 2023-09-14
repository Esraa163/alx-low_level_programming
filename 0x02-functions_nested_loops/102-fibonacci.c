#include "main.h"

/**
 * main - entry point
 * Description: prints first 50 fib numbers
 *		where starts from 1 , 2 folled by new line
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	unsigned long fib[50], i;

	fib[0] = 1;
	fib[1] = 2;

	printf("%lu, %lu, ", fib[0], fib[1]);

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (i == 49)
			printf("%lu ", fib[49]);
		else
			printf("%lu,", fib[i]);
	}
	printf("\n");
	return (0);
}
