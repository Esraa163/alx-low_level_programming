#include "main.h"

/**
 * _sqrt_recursion - function of square
 * @n: input number
 * Return: the squer of n
*/

int _sqrt_recursion(int n)
{
	return (squere(n, 1));
}

/**
 * squere - fint the sq
 * @n: input number
 * @val: input number
 * Return: int
*/

int squere(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (squere(n, val + 1));
	else
		return (-1);
}
