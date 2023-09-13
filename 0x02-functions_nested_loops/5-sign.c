#include "main.h"


/**
 * print_sign - function that can get the number
 *		 greater or less or equal to zero
 *
 * @n: takes input from other function
 *
 * Return: return 1 if + retur 0 if 0 return -1 if -
 *
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(48);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
