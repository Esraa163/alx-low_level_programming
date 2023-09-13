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
	int fib[49], i;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i >= 48; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf("%d,", fib[i])
	}
	return (0);
}
