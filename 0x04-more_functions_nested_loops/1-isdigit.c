#include "main.h"

/**
 * _isdigit - that check if c is digit or not
 *
 * @c: that the input
 *
 * Return: return 1 if c is digit and 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
