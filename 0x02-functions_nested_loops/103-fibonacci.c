#include "main.h"

/**
 * main - entry point
 *
 * Description: print the sum of the even numbers in fib
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int fib[32], i, sum = 0;

	for (i = 2; i < 33; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if (fib[i] % 2 == 0)
		{
			sum = sum + fib[i];
		}
	}
	printf("%d\n", sum);
	return (0);
}
