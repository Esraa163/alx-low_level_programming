#include "main.h"

/**
 * factorial - print the factorial of n
 * @n: the input number
 * Return: value of factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
