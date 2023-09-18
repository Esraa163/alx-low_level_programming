#include "main.h"

/**
 * print_rev - takes a string and rev it
 *
 * @s: the input string
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
