#include "main.h"

/**
 * _isupper - print 1 if upper and 0 if lower
 *
 * @c: is the char that will checked
 *
 * Return: return 1 if upper return 0 if lower
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
