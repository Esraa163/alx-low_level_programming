#include "main.h"

/**
 * rev_string - print the string reversed
 *
 * @s: the input string
*/

void rev_string(char *s)
{
	int i;

	while (s[i])
		i++;

	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
