#include "main.h"

/**
 * is_prime_number - print the prime number
 * @n: input number
 * Return: the value
*/

int is_prime_number(int n)
{
	return (check_prrime(n, 2));
}
/**
 * check_prrime - functhion to check
 * @n: number
 * @m: anter number
 * Return: int
*/
int check_prrime(int n, int m)
{
	if (m >= n && n > 1)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (check_prrime(n, m + 1));
}
