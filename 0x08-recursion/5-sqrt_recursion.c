#include "main.h"

/**
 * _sqrt_recursion - function of square
 * @n: input number
 * @val: input value
 * Return: the square of n
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - fint the sq
 * @n: input number
 * @val: input number
 * Return: int
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
