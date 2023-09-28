#include "main.h"

/**
 * _pow_recursion - power function
 * @x: input number (base)
 * @y: input number(power)
 * Return: x power y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
