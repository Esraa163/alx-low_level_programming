#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: print from 0 to 9 using putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII represntation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
