#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: print all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		printf("%d", digit);
	printf("\n");

	return (0);
}
