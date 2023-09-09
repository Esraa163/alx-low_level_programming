#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a last digit
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("last digit of %d", n "is ", digit, "and less than 6 and not 0");
	else if (digit == 0)
		printf("last digit of %d", n " is ", digit, "and is 0");
	else
		printf("last digit of %d", n " is ", digit, "and is greater than 5");
	return (0);
}
