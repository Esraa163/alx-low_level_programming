#include "main.h"

/**
 * _abs - function that computes the abslute
 *		value of an integer
 *
 * @n: takes in integer type onput for the function
 *
 * Return: allwya 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
