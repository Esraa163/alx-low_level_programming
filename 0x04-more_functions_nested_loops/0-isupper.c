#include "main.h"

/**
 * _isupper - print 1 if upper and 0 if lower
 *
 * @c: is the char tatwill checked
 *
 * Return: return 1 if upper return 0 if lower
*/

int _isupper(int c)
{
	if (c > 96 && c < 123)
	{
		return (0);
	}
	if (c > 64 && c < 91)
	{
		return (1);
	}
}
