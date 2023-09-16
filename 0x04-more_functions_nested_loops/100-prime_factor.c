#include "main.h"

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and print th largest
 *		prime factor of numb (num)
 *
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int a, b;

	/*first div with the smallestprim number (two) */
	while (num % 2 == 0)
		num = num / 2;

	/* num must be odd so we proceed to the next prime number plus two */

	for (a = 3; a <= _sqrt(num); a += 2)
	{
		while (num % a == 0)
		{
			num = num / a;
			b = a;
		}
	}
	if (num > 2)
		b = num;
	printf("%d\n", b);
}

/**
 * main - entry point
 *
 * Return: alwyas 0
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}

